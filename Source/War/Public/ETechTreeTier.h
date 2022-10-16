#pragma once
#include "CoreMinimal.h"
#include "ETechTreeTier.generated.h"

UENUM(BlueprintType)
enum class ETechTreeTier : uint8 {
    Prototype,
    One,
    Two,
    Three,
    Count,
};

