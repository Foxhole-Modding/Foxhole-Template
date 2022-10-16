#pragma once
#include "CoreMinimal.h"
#include "ETimeDiscrepancyType.generated.h"

UENUM(BlueprintType)
enum class ETimeDiscrepancyType : uint8 {
    AntiLag,
    AntiCheat,
    Custom,
};

