#pragma once
#include "CoreMinimal.h"
#include "EAccessItemHolderResponse.generated.h"

UENUM(BlueprintType)
enum class EAccessItemHolderResponse : uint8 {
    Success,
    OwnerPendingTravel,
    ZombiesRestricted,
    VehicleLocked,
    EnemyTeamStrucuture,
    OutOfRange,
    SquadLocked,
    Error,
};

