#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlot.generated.h"

UENUM(BlueprintType)
enum class EEquipmentSlot : uint8 {
    Primary,
    Secondary,
    Tertiary,
    Head,
    Body,
    Accessory,
    Utility,
    Large,
    NumSlots,
    None,
};

