#pragma once
#include "CoreMinimal.h"
#include "EReserveStockpileUserRole.generated.h"

UENUM(BlueprintType)
enum class EReserveStockpileUserRole : uint8 {
    Owner,
    UserWithAccess,
    ExternalUser,
    NotVisible,
};

