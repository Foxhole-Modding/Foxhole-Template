#pragma once
#include "CoreMinimal.h"
#include "ESquadEditMembersResponse.generated.h"

UENUM(BlueprintType)
enum class ESquadEditMembersResponse : uint8 {
    Success,
    IsPrivate,
    SquadNotFound,
    SquadLimitReached,
    SizeLimitReached,
    TooSoon,
    AlreadyInSquad,
    Error,
};

