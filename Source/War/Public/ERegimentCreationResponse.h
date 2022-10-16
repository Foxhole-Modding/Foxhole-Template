#pragma once
#include "CoreMinimal.h"
#include "ERegimentCreationResponse.generated.h"

UENUM(BlueprintType)
enum class ERegimentCreationResponse : uint8 {
    Success,
    AlreadyInRegiment,
    RankTooLow,
    TooSoon,
    Error,
};

