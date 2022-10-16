#include "VehicleMovementProfileData.h"

FVehicleMovementProfileData::FVehicleMovementProfileData() {
    this->Mass = 0.00f;
    this->BrakeForce = 0.00f;
    this->HandbrakeForce = 0.00f;
    this->AirResistance = 0.00f;
    this->RollingResistance = 0.00f;
    this->LowSpeedEngineForceMultiplier = 0.00f;
    this->LowGearCutoff = 0.00f;
    this->CenterOfGravityHeight = 0.00f;
    this->FrontGripCurve = NULL;
    this->RearGripCurve = NULL;
    this->EngineForceMultiplierCurve = NULL;
    this->bUsesDifferentialSteering = false;
    this->bCanRotateInPlace = false;
}

