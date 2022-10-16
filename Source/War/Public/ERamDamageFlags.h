#pragma once
#include "CoreMinimal.h"
#include "ERamDamageFlags.generated.h"

UENUM(BlueprintType)
enum class ERamDamageFlags : uint8 {
    None,
    Light = 0x1,
    Medium,
    Destructible = 0x4,
    DrivenOver = 0x8,
    DrivenOverTracked = 0x10,
    WaterVehicles = 0x20,
};

