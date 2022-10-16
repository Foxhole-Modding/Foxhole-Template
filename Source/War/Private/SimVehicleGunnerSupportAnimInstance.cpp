#include "SimVehicleGunnerSupportAnimInstance.h"

class UAnimNotify;

void USimVehicleGunnerSupportAnimInstance::AnimNotify_OnFiringOver(const UAnimNotify* Notify) {
}

void USimVehicleGunnerSupportAnimInstance::AnimNotify_OnAltFiringOver(const UAnimNotify* Notify) {
}

void USimVehicleGunnerSupportAnimInstance::AnimNotify_OnAlt02FiringOver(const UAnimNotify* Notify) {
}

USimVehicleGunnerSupportAnimInstance::USimVehicleGunnerSupportAnimInstance() {
    this->GunnerYaw = 0.00f;
    this->GunnerPitch = 0.00f;
    this->bIsFiring = false;
    this->bIsGunnerFiring = false;
    this->bIsGunnerReloading = false;
    this->bIsGunnerWorking = false;
    this->AltGunnerYaw = 0.00f;
    this->AltGunnerPitch = 0.00f;
    this->bIsAltFiring = false;
    this->bIsAltGunnerFiring = false;
    this->bIsAltGunnerReloading = false;
    this->bIsAltGunnerWorking = false;
    this->AltGunner02Yaw = 0.00f;
    this->AltGunner02Pitch = 0.00f;
    this->bIsAlt02Firing = false;
    this->bIsAltGunner02Firing = false;
    this->bIsAltGunner02Reloading = false;
    this->bIsAltGunner02Working = false;
}

