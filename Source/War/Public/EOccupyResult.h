#pragma once
#include "CoreMinimal.h"
#include "EOccupyResult.generated.h"

UENUM(BlueprintType)
enum class EOccupyResult : uint8 {
    Occupied,
    Vacated,
    Failed,
};

