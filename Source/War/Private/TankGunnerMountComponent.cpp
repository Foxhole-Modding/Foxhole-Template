#include "TankGunnerMountComponent.h"

void UTankGunnerMountComponent::ServerStartInvoke_Implementation(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange) {
}
bool UTankGunnerMountComponent::ServerStartInvoke_Validate(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange) {
    return true;
}

void UTankGunnerMountComponent::MulticastPlayFiringFX_Implementation() {
}

void UTankGunnerMountComponent::MulticastPlayDebugTrace_Implementation(FVector TraceStart, FVector TraceEnd, FVector HitLocation, float HitAngle, FVector HitNormal, float DamageInnerRadius, float DamageOuterRadius) {
}

UTankGunnerMountComponent::UTankGunnerMountComponent() {
    this->ReloadSoundCue = NULL;
    this->ShotSoundCue = NULL;
    this->MuzzleFlashPS = NULL;
    this->bTriggerDriverFiringState = false;
}

