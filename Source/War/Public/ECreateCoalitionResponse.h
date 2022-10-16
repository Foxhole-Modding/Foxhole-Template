#pragma once
#include "CoreMinimal.h"
#include "ECreateCoalitionResponse.generated.h"

UENUM(BlueprintType)
enum class ECreateCoalitionResponse : uint8 {
    Success,
    LimitReached,
    RankTooLow,
    ZombieNotAllowed,
    NumTypes,
};

