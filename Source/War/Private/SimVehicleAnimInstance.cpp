#include "SimVehicleAnimInstance.h"

USimVehicleAnimInstance::USimVehicleAnimInstance() {
    this->Speed = 0.00f;
    this->RotationInPlaceSpeed = 0.00f;
    this->TurnAngle = 0.00f;
    this->WheelRadius = 1.00f;
    this->InertialRoll = 0.00f;
    this->InertialPitch = 0.00f;
    this->bIsDestroyed = false;
    this->bIsTopHatchOpen = false;
    this->LastYaw = 340282346638528859811704183484516925440.00f;
    this->LastAngularVelocity = 0.00f;
    this->TrackDisabledIntensity = 0.00f;
}

