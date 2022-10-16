#pragma once
#include "CoreMinimal.h"
#include "ETravelResult.generated.h"

UENUM(BlueprintType)
enum class ETravelResult : uint8 {
    Success = 0x1,
    FailureInvalidRequest,
    FailureServerError,
    FailureProfileSave,
    FailureProfileLoad,
    FailureServerFull,
    FailureNoLocation,
    FailureServerUnavailable,
    FailureTimeout,
    FailureEnemyPresent,
    FailureTooManyRequests,
    FailureNestedCargo,
    FailureDead,
    FailureWarServiceUnavailable,
    FailureTooManyRailPassengers,
    Count,
    MAX = 0,
};

