#include "GunTurret.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"

float AGunTurret::GetTrackingAngle() const {
    return 0.0f;
}

void AGunTurret::AllPlayImpactFX_Implementation(const FHitResult& HitResult) {
}

void AGunTurret::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGunTurret, TrackingAngle);
}

AGunTurret::AGunTurret() {
    this->TrackingSpeed = 0.50f;
    this->BaseDamage = 500.00f;
    this->ExplosionRadius = 500.00f;
    this->TrackingThreshold = 0.01f;
    this->FiringThreshold = 0.08f;
    this->DamageDelay = 0.60f;
    this->SkelMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkelMesh"));
    this->ExplosionTemplate = NULL;
    this->TrackingAngle = 0.00f;
}

