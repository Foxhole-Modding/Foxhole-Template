#pragma once
#include "CoreMinimal.h"
#include "ESquadCreationResponse.generated.h"

UENUM(BlueprintType)
enum class ESquadCreationResponse : uint8 {
    Success,
    SquadLimitReached,
    TooSoon,
    Error,
};

