#pragma once
#include "CoreMinimal.h"
#include "EClientFoliageReplacementState.generated.h"

UENUM(BlueprintType)
enum class EClientFoliageReplacementState : uint8 {
    Initial,
    Damaged,
    Destroyed,
};

