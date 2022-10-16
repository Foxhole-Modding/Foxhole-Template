#pragma once
#include "CoreMinimal.h"
#include "EWarBalancerWinFactor.generated.h"

UENUM(BlueprintType)
enum class EWarBalancerWinFactor : uint8 {
    NotAvailable,
    NeitherFactionWinning,
    ColonialsWinning,
    WardensWinning,
    ColonialsNearVictory,
    WardensNearVictory,
};

