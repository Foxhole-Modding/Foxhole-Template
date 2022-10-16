#pragma once
#include "CoreMinimal.h"
#include "EDynamicTier.generated.h"

UENUM(BlueprintType)
enum class EDynamicTier : uint8 {
    Default,
    One,
    Two,
    Three,
    MAX,
};

