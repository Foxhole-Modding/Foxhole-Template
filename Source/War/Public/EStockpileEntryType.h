#pragma once
#include "CoreMinimal.h"
#include "EStockpileEntryType.generated.h"

UENUM(BlueprintType)
enum class EStockpileEntryType : uint8 {
    None,
    Items,
    ItemCrates,
    ReservableItemCrates,
    Vehicles,
    VehicleCrates,
    Structures,
    StructureCrates,
    MAX,
};

