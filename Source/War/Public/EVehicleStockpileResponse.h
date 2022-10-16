#pragma once
#include "CoreMinimal.h"
#include "EVehicleStockpileResponse.generated.h"

UENUM(BlueprintType)
enum class EVehicleStockpileResponse : uint8 {
    Success,
    Error,
    NotStockpilable,
    WaterVehicleNotStockpilable,
    RepairNeeded,
    OccupantsInside,
    MustBeUnlocked,
    CargoMustBeEmpty,
    InventoryMustBeEmpty,
    StockpileMustBeEmpty,
    Frozen,
    ArmourNeeded,
    WeaponMountMustBeEmpty,
    DoorBlocked,
    MustBeTierOne,
};

