#include "MortarItemComponent.h"

class AExplosiveAmmoPickup;

void UMortarItemComponent::ServerFire_Implementation(float Distance, FActivityStateChange ActivityStateChange) {
}
bool UMortarItemComponent::ServerFire_Validate(float Distance, FActivityStateChange ActivityStateChange) {
    return true;
}

void UMortarItemComponent::MulticastPlayFiringFX_Implementation(const AExplosiveAmmoPickup* AmmoPickup) {
}

void UMortarItemComponent::ClientDrawDamageDebug_Implementation(FVector HitLocation, float Radius) {
}

UMortarItemComponent::UMortarItemComponent() {
    this->SkeletalMesh = NULL;
    this->MuzzleFlashPS = NULL;
    this->TelegraphDelay = 0.80f;
    this->MortarFlightTime = 5.00f;
    this->MinDistance = 1500.00f;
    this->MaxDistance = 5000.00f;
}

