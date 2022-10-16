#pragma once
#include "CoreMinimal.h"
#include "EModeType.generated.h"

UENUM(BlueprintType)
enum class EModeType : uint8 {
    UseDefault,
    Build,
    Crane,
    Package,
    Retrieve,
    Placement,
};

