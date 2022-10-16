#pragma once
#include "CoreMinimal.h"
#include "EPackUpResponse.generated.h"

UENUM(BlueprintType)
enum class EPackUpResponse : uint8 {
    Success,
    Error,
    InUse,
    InventoryMustBeEmpty,
    MustBeRepaired,
};

