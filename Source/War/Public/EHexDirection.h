#pragma once
#include "CoreMinimal.h"
#include "EHexDirection.generated.h"

UENUM(BlueprintType)
enum class EHexDirection : uint8 {
    North,
    NorthEast,
    SouthEast,
    South,
    SouthWest,
    NorthWest,
    Num,
};

