#pragma once
#include "CoreMinimal.h"
#include "ERegionLogEntryType.generated.h"

UENUM(BlueprintType)
enum class ERegionLogEntryType : uint8 {
    None,
    FriendlyPlayerDamage,
    FriendlyDamage,
    VehiclesTransferred,
    VehicleSelfDamage,
    DisruptivePlacement,
    Count,
};

