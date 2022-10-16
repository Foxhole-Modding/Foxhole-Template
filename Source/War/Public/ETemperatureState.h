#pragma once
#include "CoreMinimal.h"
#include "ETemperatureState.generated.h"

UENUM(BlueprintType)
enum class ETemperatureState : uint8 {
    Burning,
    Hot,
    None,
    Cold,
    Freezing,
    Frozen,
    MAX,
};

