#pragma once
#include "CoreMinimal.h"
#include "ETransmitResponse.generated.h"

UENUM(BlueprintType)
enum class ETransmitResponse : uint8 {
    Success,
    Error,
    InStructure,
    InVehicle,
    InvalidMovementBase,
    InvalidStance,
    OutOfRange,
    NoEnemyStructures,
    FriendlyStaticBase,
    BlockedFromAbove,
};

