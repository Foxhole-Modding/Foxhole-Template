#pragma once
#include "CoreMinimal.h"
#include "ECardinalDirection.generated.h"

UENUM(BlueprintType)
enum class ECardinalDirection : uint8 {
    North,
    East,
    South,
    West,
};

