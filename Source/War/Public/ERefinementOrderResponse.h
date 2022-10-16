#pragma once
#include "CoreMinimal.h"
#include "ERefinementOrderResponse.generated.h"

UENUM(BlueprintType)
enum class ERefinementOrderResponse : uint8 {
    Success,
    Error,
    NotEnoughMaterials,
    InventoryFull,
    NotEnoughToCrate,
    AtRefinedItemCap,
    UnsupportedItem,
};

