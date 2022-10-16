#pragma once
#include "CoreMinimal.h"
#include "ESlopeRotationMode.generated.h"

UENUM()
enum class ESlopeRotationMode : int32 {
    OpposingSockets,
    LocalSampling,
    ManualControl,
};

