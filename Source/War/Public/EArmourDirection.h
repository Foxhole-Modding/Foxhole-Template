#pragma once
#include "CoreMinimal.h"
#include "EArmourDirection.generated.h"

UENUM(BlueprintType)
enum class EArmourDirection : uint8 {
    Default,
    Front,
    Back,
    Left,
    Right,
    Turret,
    Turret2,
    Turret3,
    Count,
};

