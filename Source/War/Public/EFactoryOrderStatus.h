#pragma once
#include "CoreMinimal.h"
#include "EFactoryOrderStatus.generated.h"

UENUM(BlueprintType)
enum class EFactoryOrderStatus : uint8 {
    NoOrder,
    Pending,
    ReadyPickup,
    NumTypes,
};

