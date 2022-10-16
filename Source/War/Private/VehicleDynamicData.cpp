#include "VehicleDynamicData.h"

FVehicleDynamicData::FVehicleDynamicData() {
    this->bHasTierUpgrades = false;
    this->MaxHealth = 0;
    this->MinorDamagePercent = 0.00f;
    this->MajorDamagePercent = 0.00f;
    this->RepairCost = 0;
    this->ResourcesPerBuildCycle = 0;
    this->ItemHolderCapacity = 0;
    this->FuelCapacity = 0.00f;
    this->FuelConsumptionPerSecond = 0.00f;
    this->SwimmingFuelConsumptionModifier = 0.00f;
    this->DefaultSurfaceMovementRate = 0.00f;
    this->OffroadSnowPenalty = 0.00f;
    this->ReverseSpeedModifier = 0.00f;
    this->RotationRate = 0.00f;
    this->RotationSpeedCuttoff = 0.00f;
    this->SpeedSqrThreshold = 0.00f;
    this->EngineForce = 0.00f;
    this->MassOverride = 0.00f;
    this->TankArmour = 0;
    this->MinTankArmourPercent = 0.00f;
    this->TankArmourMinPenetrationChance = 0.00f;
    this->VehicleSubsystemDisableChances[0] = 0.00f;
    this->VehicleSubsystemDisableChances[1] = 0.00f;
    this->VehicleSubsystemDisableChances[2] = 0.00f;
    this->VehicleSubsystemDisableChances[3] = 0.00f;
    this->VehicleSubsystemDisableChances[4] = 0.00f;
}

