#pragma once
#include "CoreMinimal.h"
#include "ETooltipDetailType.generated.h"

UENUM(BlueprintType)
enum class ETooltipDetailType : uint8 {
    Default,
    HighestVisibility,
    MediumVisibility,
    LowVisibility,
};

