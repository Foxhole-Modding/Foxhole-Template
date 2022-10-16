#include "WarExplosionEffect.h"
#include "Net/UnrealNetwork.h"
#include "Components/PointLightComponent.h"

class UParticleSystemComponent;

void AWarExplosionEffect::OnParticleSystemFinished(UParticleSystemComponent* PSystem) {
}

void AWarExplosionEffect::MulticastTelegraph_Implementation(float TimeUntilDetonation) {
}

void AWarExplosionEffect::MulticastDetonate_Implementation() {
}

float AWarExplosionEffect::GetTimeSinceDetonation() const {
    return 0.0f;
}




void AWarExplosionEffect::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWarExplosionEffect, SurfaceHit);
    DOREPLIFETIME(AWarExplosionEffect, ServerDetonationTime);
    DOREPLIFETIME(AWarExplosionEffect, ProjectileImpactVelocity);
}

AWarExplosionEffect::AWarExplosionEffect() {
    this->RadialHitImpact = NULL;
    this->ImpactEffectDamage = 1.00f;
    this->ExplosionLightFadeOut = 0.20f;
    this->ExplosionSound = NULL;
    this->CameraShake = NULL;
    this->CameraShakeOuterRadius = 0.00f;
    this->bDoNotOrientToImpactNormal = false;
    this->bOrientToDirectionOfTravel = false;
    this->bManualDestruction = false;
    this->bDestroyWhenParticleSystemCompletes = true;
    this->bParentToImpactSurface = false;
    this->ManualDeactivateTime = 14.00f;
    this->bFadeSoundOnDeactivate = false;
    this->SoundFadeDuration = -1.00f;
    this->PainVolume = NULL;
    this->PainVolumeDelay = 0.00f;
    this->bIsDelayed = false;
    this->TankArmourEffectBehaviour = ETankArmourEffectBehaviour::Default;
    this->SpawnedExplosionSound = NULL;
    this->bHasManuallyDeactivated = false;
    this->DetonationDelay = 0.00f;
    this->TelegraphDelay = 0.00f;
    this->ExplosionLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ExplosionLight"));
    this->ServerDetonationTime = -1.00f;
    this->ExplosionParticleSystem = NULL;
}

