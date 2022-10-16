#pragma once
#include "CoreMinimal.h"
#include "ECustomMovementMode.generated.h"

UENUM(BlueprintType)
enum class ECustomMovementMode : uint8 {
    MOVE_Custom_None,
    MOVE_Custom_LadderClimbing,
    MOVE_Custom_WoundedCarried,
    MOVE_Custom_MAX UMETA(Hidden),
};

