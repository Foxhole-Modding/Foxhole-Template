#pragma once
#include "CoreMinimal.h"
#include "EFortTier.generated.h"

UENUM(BlueprintType)
enum class EFortTier : uint8 {
    None,
    T1,
    T2,
    T3,
    T3AI,
    Count,
};

