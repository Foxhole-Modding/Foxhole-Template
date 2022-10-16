#pragma once
#include "CoreMinimal.h"
#include "EBuildLocationType.generated.h"

UENUM(BlueprintType)
enum class EBuildLocationType : uint8 {
    None,
    Anywhere,
    VehicleFactory,
    Shipyard,
    ConstructionYard,
    TestShard,
    RailTrackLarge,
    RailTrackSmall,
    RailTrackCrane,
};

