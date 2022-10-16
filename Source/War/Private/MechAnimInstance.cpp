#include "MechAnimInstance.h"

UMechAnimInstance::UMechAnimInstance() {
    this->MechSpeed = 0.00f;
    this->RotationInPlaceSpeed = 0.00f;
    this->MovementDirection = 0.00f;
    this->HorizontalBodyAim = 0.00f;
    this->CannonVerticalAim = 0.00f;
    this->LeftHMGHorizontalAim = 0.00f;
    this->LeftHMGVerticalAim = 0.00f;
    this->RightHMGHorizontalAim = 0.00f;
    this->RightHMGVerticalAim = 0.00f;
    this->bIsDestroyed = false;
    this->bIsAnyWeaponAiming = false;
    this->bIsHatchOpen = false;
    this->MinSpeed = 0.00f;
    this->LegAngleCurve = NULL;
    this->LastYaw = 340282346638528859811704183484516925440.00f;
    this->LastAngularVelocity = 0.00f;
}

