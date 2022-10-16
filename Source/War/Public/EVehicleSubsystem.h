#pragma once
#include "CoreMinimal.h"
#include "EVehicleSubsystem.generated.h"

UENUM(BlueprintType)
enum class EVehicleSubsystem : uint8 {
    Track,
    FuelTank,
    Turret,
    Turret2,
    Turret3,
    NumSubsystems,
    None,
};

