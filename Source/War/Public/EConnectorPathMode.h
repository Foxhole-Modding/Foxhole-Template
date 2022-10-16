#pragma once
#include "CoreMinimal.h"
#include "EConnectorPathMode.generated.h"

UENUM(BlueprintType)
enum class EConnectorPathMode : uint8 {
    Spline,
    Arc,
    Biarc,
};

