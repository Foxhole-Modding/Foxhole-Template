#pragma once
#include "CoreMinimal.h"
#include "ERefineryClaimType.generated.h"

UENUM(BlueprintType)
enum class ERefineryClaimType : uint8 {
    Single,
    Multiple,
    Crate,
    ToRefineryInventory,
};

