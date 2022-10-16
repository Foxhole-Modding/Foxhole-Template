#pragma once
#include "CoreMinimal.h"
#include "EUserVoteKickCategory.generated.h"

UENUM(BlueprintType)
enum class EUserVoteKickCategory : uint8 {
    TeamKilling,
    TeamVehicleDamage,
    TeamStructureDamage,
    Cheating,
    BadLanguage,
    BadStructurePlacement,
    IntelLeak,
    SuspectedAltAccount,
    Count,
};

