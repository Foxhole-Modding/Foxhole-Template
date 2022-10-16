#include "StaticBase.h"
#include "Net/UnrealNetwork.h"
#include "AITurretsControllerComponent.h"

void AStaticBase::OnRep_IsVictoryTown() {
}

void AStaticBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStaticBase, bIsVictoryTownRep);
}

AStaticBase::AStaticBase() {
    this->AITurretsController = CreateDefaultSubobject<UAITurretsControllerComponent>(TEXT("AITurretsControllerComponent"));
    this->bIsVictoryTownRep = false;
    this->TownConnectionLevel = 1;
}

