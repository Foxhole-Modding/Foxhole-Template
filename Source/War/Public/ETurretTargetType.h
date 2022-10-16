#pragma once
#include "CoreMinimal.h"
#include "ETurretTargetType.generated.h"

UENUM(BlueprintType)
enum class ETurretTargetType : uint8 {
    None,
    Players,
    AllVehicles,
    WaterVehicles = 0x4,
    BuildSites = 0x8,
    EmplacedWeapons = 0x10,
    All = 0x1F,
};

