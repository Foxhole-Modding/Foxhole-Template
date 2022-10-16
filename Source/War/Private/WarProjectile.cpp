#include "WarProjectile.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/AudioComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

class AActor;

void AWarProjectile::SetHomingTarget(AActor* Target) {
}

void AWarProjectile::OnRep_Exploded() {
}

void AWarProjectile::OnProjectileStop(const FHitResult& HitResult) {
}


void AWarProjectile::ExplodeAll_Implementation(const FProjectileHitInfo_NetQuantize& Impact) {
}

void AWarProjectile::Detonate(const FProjectileHitInfo_NetQuantize& HitResult) {
}

void AWarProjectile::ApplyExplosiveDamageAndSpawnFx(const FProjectileHitInfo_NetQuantize& HitResult) {
}

void AWarProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWarProjectile, bExploded);
}

AWarProjectile::AWarProjectile() {
    this->MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->ParticleComp = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleComp"));
    this->LoopingAudio = CreateDefaultSubobject<UAudioComponent>(TEXT("LoopingAudio"));
    this->SkeletalMesh = NULL;
    this->ExplosionTemplate = NULL;
    this->ProjectileLife = 0.00f;
    this->AutoDetonateTime = 0.00f;
    this->ProjectileDeathDelay = 2.00f;
    this->ExplosionImpactBumpDistance = 8.00f;
    this->PenetrationBonusMaxRange = 0.00f;
    this->IsPointDamage = false;
    this->bUseAccurateHitReplication = false;
    this->bProjectImpactDownward = false;
    this->bHideMeshOnExplode = true;
    this->bSpawnExplosionOnServer = false;
    this->bDebugDraw = false;
    this->bExploded = false;
    this->bRotationRequiresVelocity = false;
    this->RotationVelocityRequirement = 0.00f;
}

