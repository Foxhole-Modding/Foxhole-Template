#include "InfantryRailVehicleAnimInstance.h"

class UAnimNotify;

void UInfantryRailVehicleAnimInstance::AnimNotify_OnFiringOver(const UAnimNotify* Notify) {
}

void UInfantryRailVehicleAnimInstance::AnimNotify_OnAltFiringOver(const UAnimNotify* Notify) {
}

void UInfantryRailVehicleAnimInstance::AnimNotify_OnAlt02FiringOver(const UAnimNotify* Notify) {
}

UInfantryRailVehicleAnimInstance::UInfantryRailVehicleAnimInstance() {
    this->RightGunnerYaw = 0.00f;
    this->RightGunnerPitch = 0.00f;
    this->bRightGunnerIsFiring = false;
    this->LeftGunnerYaw = 0.00f;
    this->LeftGunnerPitch = 0.00f;
    this->bLeftGunnerIsFiring = false;
    this->bIsRightHatchOpen = false;
    this->bIsLeftHatchOpen = false;
    this->MainGunnerYaw = 0.00f;
    this->MainGunnerPitch = 0.00f;
    this->bMainGunnerIsFiring = false;
}

