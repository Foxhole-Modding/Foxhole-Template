#pragma once
#include "CoreMinimal.h"
#include "EItemSubtype.generated.h"

UENUM(BlueprintType)
enum class EItemSubtype : uint8 {
    None,
    ArmorPiercing,
    Flare,
    GreenAsh,
    HighExplosive,
    Shrapnel,
    Smoke,
    NumTypes,
};

