#pragma once
#include "CoreMinimal.h"
#include "EFactoryReadyOrdersPickupStatus.generated.h"

UENUM(BlueprintType)
enum class EFactoryReadyOrdersPickupStatus : uint8 {
    CanBePickedUp,
    TransferLocationBlocked,
    NumTypes,
};

