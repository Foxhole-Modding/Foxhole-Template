#pragma once
#include "CoreMinimal.h"
#include "EWarBalancerRegionTypeFactor.generated.h"

UENUM(BlueprintType)
enum class EWarBalancerRegionTypeFactor : uint8 {
    NotAvailable,
    NeutralStarterContested,
    FriendlyStarterContested,
    MostlyFriendlyStarterContested,
    NeutralStarterNotContested,
    FriendlyStarterNotContested,
    MostlyFriendlyStarterNotContested,
};

