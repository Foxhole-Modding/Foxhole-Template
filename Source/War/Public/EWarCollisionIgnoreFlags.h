#pragma once
#include "CoreMinimal.h"
#include "EWarCollisionIgnoreFlags.generated.h"

UENUM(BlueprintType)
enum class EWarCollisionIgnoreFlags : uint8 {
    BridgeWaterAccess = 0x1,
    MovementSweep,
    DefenseMods = 0x4,
    RailwayTrack = 0x8,
    UnusedIgnoreFlag5 = 0x10,
    UnusedIgnoreFlag6 = 0x20,
    MAX = 0,
};

