#include "ProjectileGunnerMountComponent.h"
#include "Net/UnrealNetwork.h"

void UProjectileGunnerMountComponent::ServerStopInvoke_Implementation() {
}
bool UProjectileGunnerMountComponent::ServerStopInvoke_Validate() {
    return true;
}

void UProjectileGunnerMountComponent::ServerStartInvoke_Implementation(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange) {
}
bool UProjectileGunnerMountComponent::ServerStartInvoke_Validate(FCharacterInvokeInfo InvokeInfo, FActivityStateChange ActivityStateChange) {
    return true;
}

void UProjectileGunnerMountComponent::ServerSetPitch_Implementation(float Pitch) {
}
bool UProjectileGunnerMountComponent::ServerSetPitch_Validate(float Pitch) {
    return true;
}

void UProjectileGunnerMountComponent::AllSpawnFiringEffects_Implementation() {
}

void UProjectileGunnerMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UProjectileGunnerMountComponent, Ammo);
}

UProjectileGunnerMountComponent::UProjectileGunnerMountComponent() {
    this->MuzzleFlashPS = NULL;
    this->BackMuzzleFlashPS = NULL;
    this->ReloadSoundCue = NULL;
    this->ShotSoundCue = NULL;
    this->MinSpeed = 3000.00f;
    this->MaxSpeed = 3000.00f;
    this->SpeedVariation = 0.15f;
    this->SuggestedVelocitySpeed = 0.00f;
    this->FallbackAngle = 30.00f;
    this->ProjectileClass = NULL;
    this->bIsArtilleryMode = false;
    this->bIsMultiWeapon = false;
    this->bShowAimMesh = false;
    this->bTriggerDriverFiringState = false;
    this->bIsAutomaticFire = false;
    this->Ammo = 0;
}

