#include "ArtilleryGunnerMountComponent.h"

class AExplosiveAmmoPickup;

void UArtilleryGunnerMountComponent::ServerStopInvoke_Implementation() {
}
bool UArtilleryGunnerMountComponent::ServerStopInvoke_Validate() {
    return true;
}

void UArtilleryGunnerMountComponent::ServerSetPitch_Implementation(float Pitch) {
}
bool UArtilleryGunnerMountComponent::ServerSetPitch_Validate(float Pitch) {
    return true;
}

void UArtilleryGunnerMountComponent::ServerFireShell_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UArtilleryGunnerMountComponent::ServerFireShell_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UArtilleryGunnerMountComponent::MulticastPlayFiringFX_Implementation(const AExplosiveAmmoPickup* AmmoPickupCDO) {
}

UArtilleryGunnerMountComponent::UArtilleryGunnerMountComponent() {
    this->ReloadSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->TelegraphOffset = 0.00f;
    this->DamageDelay = 0.75f;
    this->FireDelay = 1.50f;
    this->SpoolupDelay = 0.00f;
    this->FiringAngleOverride = 0.00f;
    this->bCanRotate = true;
    this->bUseClampTrjectoryToDistanceHack = false;
    this->bIsAutomaticFire = false;
    this->bHighArc = true;
    this->FlightObstructionCheckDistance = 0.00f;
}

