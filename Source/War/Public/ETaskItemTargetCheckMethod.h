#pragma once
#include "CoreMinimal.h"
#include "ETaskItemTargetCheckMethod.generated.h"

UENUM(BlueprintType)
enum class ETaskItemTargetCheckMethod : uint8 {
    None,
    OverlapFacing,
    Trace,
    DualTrace,
};

