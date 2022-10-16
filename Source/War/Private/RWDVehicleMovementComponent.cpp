#include "RWDVehicleMovementComponent.h"

URWDVehicleMovementComponent::URWDVehicleMovementComponent() {
    this->CenterOfGravityHeight = 0.50f;
    this->EngineForce = 0.00f;
    this->BrakeForce = 0.00f;
    this->HandbrakeForce = 0.00f;
    this->AirResistance = 20.00f;
    this->RollingResistance = 220.00f;
    this->bUseLegacyLateralCalc = true;
}

