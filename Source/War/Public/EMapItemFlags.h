#pragma once
#include "CoreMinimal.h"
#include "EMapItemFlags.generated.h"

UENUM(BlueprintType)
enum class EMapItemFlags : uint8 {
    IsTownBase = 0x1,
    IsHomeTown,
    IsBuildSite = 0x4,
    IsDetectionAreaHidden = 0x8,
    IsScorched = 0x10,
    IsTownClaimed = 0x20,
    MAX = 0,
};

