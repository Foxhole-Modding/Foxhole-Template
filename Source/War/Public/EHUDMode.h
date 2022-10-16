#pragma once
#include "CoreMinimal.h"
#include "EHUDMode.generated.h"

UENUM(BlueprintType)
enum class EHUDMode : uint8 {
    Visible,
    OnlyPlayerNames,
    Hidden,
    Count,
};

