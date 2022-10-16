#include "BorderBase.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"

void ABorderBase::MulticastOnSpawned_Implementation() {
}

void ABorderBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABorderBase, bIsUsable);
}

ABorderBase::ABorderBase() {
    this->OnSpawnedPS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("OnSpawnedPS"));
    this->OnSpawnedSFX = NULL;
    this->bIsUsable = false;
}

