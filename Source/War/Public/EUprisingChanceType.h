#pragma once
#include "CoreMinimal.h"
#include "EUprisingChanceType.generated.h"

UENUM(BlueprintType)
enum class EUprisingChanceType : uint8 {
    None,
    ColonialLow,
    ColonialHigh,
    WardenLow,
    WardenHigh,
};

