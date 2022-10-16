#include "GunboatArtilleryGunnerMountComponent.h"
#include "Net/UnrealNetwork.h"

void UGunboatArtilleryGunnerMountComponent::ServerSetDistance_Implementation(float Distance) {
}
bool UGunboatArtilleryGunnerMountComponent::ServerSetDistance_Validate(float Distance) {
    return true;
}

void UGunboatArtilleryGunnerMountComponent::ServerFire_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UGunboatArtilleryGunnerMountComponent::ServerFire_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UGunboatArtilleryGunnerMountComponent::MulticastPlayFiringFX_Implementation() {
}

void UGunboatArtilleryGunnerMountComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGunboatArtilleryGunnerMountComponent, Ammo);
}

UGunboatArtilleryGunnerMountComponent::UGunboatArtilleryGunnerMountComponent() {
    this->ReloadSoundCue = NULL;
    this->HorizontalDistance = 0.00f;
    this->HorizontalDistanceStep = 0.00f;
    this->TraceStep = 0;
    this->TrackingThresholdPrecisionMultiplier = 10.00f;
    this->TelegraphOffset = 0.00f;
    this->DamageDelay = 1.76f;
    this->ExplosionClass = NULL;
    this->FiringSFX = NULL;
    this->MuzzleFlashPS = NULL;
    this->AnimationHysteresisTime = 0.00f;
    this->Ammo = 0;
}

