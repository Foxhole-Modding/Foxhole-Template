#pragma once
#include "CoreMinimal.h"
#include "EJoinWarResponse.generated.h"

UENUM(BlueprintType)
enum class EJoinWarResponse : uint8 {
    Success,
    AskToJoinModQueue,
    Banned,
    PasswordIncorrect,
    TooManyLogins,
    NoFactionSwitch,
    FactionLockedSelfServeUnlockAvailable,
    FactionLimitReached,
    EarlyWarRestricted,
    TravelGroupSizeTooLarge,
    TravelGroupHasEnemy,
    UnknownError,
    EnteringQueueDisabled,
    InvalidFaction,
    ConquestPending,
    VersionCheckFailed,
    OfflineCharacterUnavailable,
    OfflineCharacterServerQueued,
    TravelPointDestroyed,
    TravelPointLacksGarrisonSize,
    TravelOnCooldown,
    ReservedButFull,
    EnteringQueueDisabledVipMode,
};

