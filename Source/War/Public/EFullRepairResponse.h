#pragma once
#include "CoreMinimal.h"
#include "EFullRepairResponse.generated.h"

UENUM(BlueprintType)
enum class EFullRepairResponse : uint8 {
    Success,
    SuccessArmour,
    NotEnoughMaterials,
    NoVehicleFound,
    VehicleNotRepairable,
    IncorrectFaction,
    Error,
};

