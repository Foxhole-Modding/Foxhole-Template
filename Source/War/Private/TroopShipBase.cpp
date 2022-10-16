#include "TroopShipBase.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

void ATroopShipBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATroopShipBase, RampAngle);
}

ATroopShipBase::ATroopShipBase() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->MinorDamagePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MinorDamagePS"));
    this->MajorDamagePS = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("MajorDamagePS"));
    this->RampAngle = 0.00f;
}

