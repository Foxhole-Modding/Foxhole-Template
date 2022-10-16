#include "WeaponFireFX.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

void AWeaponFireFX::OnProjectileStop(const FHitResult& HitResult) {
}

AWeaponFireFX::AWeaponFireFX() {
    this->MovementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
    this->CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
}

