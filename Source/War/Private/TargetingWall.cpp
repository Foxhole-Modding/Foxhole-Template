#include "TargetingWall.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"

void ATargetingWall::OnRep_DamageEvents() {
}

void ATargetingWall::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATargetingWall, DamageEvents);
}

ATargetingWall::ATargetingWall() {
    this->ResetTrigger = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ResetTrigger"));
}

