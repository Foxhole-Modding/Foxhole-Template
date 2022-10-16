#pragma once
#include "CoreMinimal.h"
#include "EDeployResponse.generated.h"

UENUM(BlueprintType)
enum class EDeployResponse : uint8 {
    Success,
    RampBlocked,
    ShorelineOnly,
    ShorelineAndDockOnly,
    TooCloseToTroopShip,
    TooCloseToBorder,
};

