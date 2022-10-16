#pragma once
#include "CoreMinimal.h"
#include "ESquadActivationResponse.generated.h"

UENUM(BlueprintType)
enum class ESquadActivationResponse : uint8 {
    Success,
    TooSoon,
    Error,
};

