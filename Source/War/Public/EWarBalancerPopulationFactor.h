#pragma once
#include "CoreMinimal.h"
#include "EWarBalancerPopulationFactor.generated.h"

UENUM(BlueprintType)
enum class EWarBalancerPopulationFactor : uint8 {
    NotAvailable,
    RoughlyEqualPlayers,
    MoreColonialPlayers,
    MoreWardenPlayers,
};

