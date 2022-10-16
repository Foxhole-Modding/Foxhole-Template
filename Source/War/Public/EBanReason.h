#pragma once
#include "CoreMinimal.h"
#include "EBanReason.generated.h"

UENUM()
enum class EBanReason : int8 {
    CommsMisuse,
    Harrassment,
    BadLanguage,
    GriefTeam,
    Cheating,
    AbuseTools,
    VoteKick,
    UnderReview,
    FactionUnlock,
    IntelLeak,
    SuspectedAltAccount,
    Count,
};

