#include "Resource.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/ArrowComponent.h"

void AResource::OnRep_IsHighYield(const bool bPreviousIsHighYield) {
}


void AResource::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResource, bIsHighYield);
}

AResource::AResource() {
    this->HammerImpactEffect = NULL;
    this->SledgeImpactEffect = NULL;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ResourceArrow"));
    this->HighYieldEffect = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HighYieldEffect"));
    this->ResourcePickupClass = NULL;
    this->BaseAmountPerGather = 1;
    this->BonusAmountOnFinalGather = 0;
    this->BaseAmount = 0;
    this->AmountRemaining = 0;
    this->GatherXP = 1;
    this->bPlayGatherFX = true;
    this->ChanceForRareResource = 0.00f;
    this->ResourceLevel = 0;
    this->ResourceFieldId = 0;
    this->bIsHighYield = false;
    this->NumNextTierResourcesToSpawn = 2;
    this->bShouldPersist = true;
    this->DestroyedFX = NULL;
    this->DestroyedSoundCue = NULL;
    this->SpawnSoundCue = NULL;
}

