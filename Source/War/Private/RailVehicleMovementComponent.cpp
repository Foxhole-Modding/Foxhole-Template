#include "RailVehicleMovementComponent.h"

URailVehicleMovementComponent::URailVehicleMovementComponent() {
    this->EngineForceCurve = NULL;
    this->BoostingEngineForceCurve = NULL;
    this->FrictionForceCurve = NULL;
    this->BrakingFrictionForceCurve = NULL;
    this->MaxRailSpeed = 3.00f;
    this->MaxRailSpeedBoosted = 3.00f;
}

