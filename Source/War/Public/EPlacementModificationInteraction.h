#pragma once
#include "CoreMinimal.h"
#include "EPlacementModificationInteraction.generated.h"

UENUM(BlueprintType)
enum class EPlacementModificationInteraction : uint8 {
    NoInteraction,
    HidesModification,
    BlocksPlacement,
};

