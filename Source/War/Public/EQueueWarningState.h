#pragma once
#include "CoreMinimal.h"
#include "EQueueWarningState.generated.h"

UENUM()
enum class EQueueWarningState : int32 {
    Auto,
    ForceShow,
    ForceHide,
};

