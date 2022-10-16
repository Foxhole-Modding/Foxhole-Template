#pragma once
#include "CoreMinimal.h"
#include "EVehicleBuildType.generated.h"

UENUM(BlueprintType)
enum class EVehicleBuildType : uint8 {
    NotBuildable,
    BuildableAnywhere,
    VehicleFactory,
    Shipyard,
    RailTrackLarge,
    RailTrackSmall,
    RailTrackCrane,
};

