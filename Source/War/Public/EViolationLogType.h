#pragma once
#include "CoreMinimal.h"
#include "EViolationLogType.generated.h"

UENUM(BlueprintType)
enum class EViolationLogType : uint8 {
    VoteKick,
    VoteBan,
    ModKick,
    ModBan,
    Unban,
    DIDBan,
    UnbanDID,
    ExcessiveFriendlyFire,
    Note,
};

