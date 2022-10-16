#include "SimpleVehicleMovementComponent.h"

USimpleVehicleMovementComponent::USimpleVehicleMovementComponent() {
    this->bCanSink = true;
    this->bIgnoreStepCheck = false;
    this->bUsesConstantFriction = false;
    this->bAllowIsWalkable = true;
    this->WaterDepthNormalized = 0.01f;
    this->FloatVelocity = 2250.00f;
    this->DepthOffset = 0.00f;
    this->MaxDepth = 0.00f;
}

