#pragma once
#include "CoreMinimal.h"
#include "EWheelTrace.generated.h"

UENUM(BlueprintType)
enum class EWheelTrace : uint8 {
    FrontLeft,
    FrontRight,
    BackLeft,
    BackRight,
    Count,
};

