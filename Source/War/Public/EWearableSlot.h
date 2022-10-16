#pragma once
#include "CoreMinimal.h"
#include "EWearableSlot.generated.h"

UENUM(BlueprintType)
enum class EWearableSlot : uint8 {
    Head,
    Chest,
    Feet,
    Utility,
    Back,
    NumSlots,
    None,
};

