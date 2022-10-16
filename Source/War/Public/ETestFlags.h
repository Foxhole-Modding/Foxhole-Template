#pragma once
#include "CoreMinimal.h"
#include "ETestFlags.generated.h"

UENUM(BlueprintType)
enum class ETestFlags : uint8 {
    VehicleCameraForwardPan,
    VehicleCameraForwardPan2,
    TownTest,
    NumTestFlags,
};

