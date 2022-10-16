#pragma once
#include "CoreMinimal.h"
#include "EAnalyticsAccessLevel.generated.h"

UENUM(BlueprintType)
enum class EAnalyticsAccessLevel : uint8 {
    Dev,
    Mod,
    Public,
};

