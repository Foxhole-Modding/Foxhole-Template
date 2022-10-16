#pragma once
#include "CoreMinimal.h"
#include "EOpenVehicleInventoryResponse.generated.h"

UENUM(BlueprintType)
enum class EOpenVehicleInventoryResponse : uint8 {
    Success,
    Locked,
};

