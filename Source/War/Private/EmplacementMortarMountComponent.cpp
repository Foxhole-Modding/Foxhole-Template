#include "EmplacementMortarMountComponent.h"

class AExplosiveAmmoPickup;

void UEmplacementMortarMountComponent::ServerStartInvoke_Implementation(FActivityStateChange ActivityStateChange, float Distance) {
}
bool UEmplacementMortarMountComponent::ServerStartInvoke_Validate(FActivityStateChange ActivityStateChange, float Distance) {
    return true;
}

void UEmplacementMortarMountComponent::MulticastPlayFiringFX_Implementation(const AExplosiveAmmoPickup* AmmoPickupCDO) {
}

void UEmplacementMortarMountComponent::MulticastDamageDebug_Implementation(FVector TraceStart, FVector TraceEnd, FVector Location, const AExplosiveAmmoPickup* AmmoPickupCDO) {
}

UEmplacementMortarMountComponent::UEmplacementMortarMountComponent() {
    this->ScopeRange = 0.00f;
    this->TrackingThresholdPrecisionMultiplier = 10.00f;
    this->MuzzleFlashPS = NULL;
    this->TelegraphDelay = 0.00f;
    this->MortarFlightTime = 0.00f;
    this->ReloadSoundCue = NULL;
    this->bDamageDebug = false;
}

