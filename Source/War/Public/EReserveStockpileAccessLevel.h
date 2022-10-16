#pragma once
#include "CoreMinimal.h"
#include "EReserveStockpileAccessLevel.generated.h"

UENUM(BlueprintType)
enum class EReserveStockpileAccessLevel : uint8 {
    Visible,
    Hidden,
};

