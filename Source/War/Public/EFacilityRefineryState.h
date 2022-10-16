#pragma once
#include "CoreMinimal.h"
#include "EFacilityRefineryState.generated.h"

UENUM(BlueprintType)
enum class EFacilityRefineryState : uint8 {
    Idle,
    Active,
    Finished,
};

