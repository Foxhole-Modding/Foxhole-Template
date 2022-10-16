#pragma once
#include "CoreMinimal.h"
#include "EItemCategory.generated.h"

UENUM(BlueprintType)
enum class EItemCategory : uint8 {
    Misc,
    SmallArms,
    HeavyArms,
    HeavyAmmo,
    Utility,
    Medical,
    Supplies,
    Uniforms,
};

