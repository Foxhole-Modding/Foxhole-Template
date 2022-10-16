#pragma once
#include "CoreMinimal.h"
#include "EServerAnimTickMode.generated.h"

UENUM(BlueprintType)
enum class EServerAnimTickMode : uint8 {
    Custom,
    TickWhenOccupied,
    NeverTicks,
};

