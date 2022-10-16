#pragma once
#include "CoreMinimal.h"
#include "ERocketLaunchSequence.generated.h"

UENUM(BlueprintType)
enum class ERocketLaunchSequence : uint8 {
    Idle,
    Verifying,
    PreLaunch,
    Launching,
    InFlight,
    InDescent,
    Incomplete,
    Complete,
    HitStrikeLocation,
};

