#pragma once
#include "CoreMinimal.h"
#include "EGateState.generated.h"

UENUM(BlueprintType)
enum class EGateState : uint8 {
    Closed,
    OpenForward,
    OpenBackward,
    FullyOpenForward,
    FullyOpenBackward,
};

