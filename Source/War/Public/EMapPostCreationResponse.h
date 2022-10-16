#pragma once
#include "CoreMinimal.h"
#include "EMapPostCreationResponse.generated.h"

UENUM(BlueprintType)
enum class EMapPostCreationResponse : uint8 {
    Success,
    RankTooLow,
    AlreadyExists,
    TooSoon,
    InvalidRegionForMapPost,
    Error,
};

