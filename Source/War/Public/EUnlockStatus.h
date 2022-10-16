#pragma once
#include "CoreMinimal.h"
#include "EUnlockStatus.generated.h"

UENUM(BlueprintType)
enum class EUnlockStatus : uint8 {
    Unlocked,
    RequiresTech,
    RequiresSameItemInOrder,
    Error,
};

