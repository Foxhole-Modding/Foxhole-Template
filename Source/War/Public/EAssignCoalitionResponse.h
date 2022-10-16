#pragma once
#include "CoreMinimal.h"
#include "EAssignCoalitionResponse.generated.h"

UENUM(BlueprintType)
enum class EAssignCoalitionResponse : uint8 {
    Error,
    Success,
    NotBuilder,
    Num,
};

