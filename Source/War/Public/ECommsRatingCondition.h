#pragma once
#include "CoreMinimal.h"
#include "ECommsRatingCondition.generated.h"

UENUM(BlueprintType)
enum class ECommsRatingCondition : uint8 {
    Good,
    Poor,
    VeryPoor,
};

