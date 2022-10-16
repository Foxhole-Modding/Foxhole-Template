#pragma once
#include "CoreMinimal.h"
#include "EProjectileFiringMode.generated.h"

UENUM(BlueprintType)
enum class EProjectileFiringMode : uint8 {
    Default,
    Grenade,
    ShortToss,
};

