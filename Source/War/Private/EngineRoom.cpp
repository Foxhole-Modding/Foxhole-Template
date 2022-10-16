#include "EngineRoom.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"

void AEngineRoom::OnRep_FuelInfo() {
}

void AEngineRoom::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEngineRoom, FuelInfo);
    DOREPLIFETIME(AEngineRoom, ConcreteSettler);
}

AEngineRoom::AEngineRoom() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->AnimMontage = NULL;
}

