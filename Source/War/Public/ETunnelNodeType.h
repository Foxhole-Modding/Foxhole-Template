#pragma once
#include "CoreMinimal.h"
#include "ETunnelNodeType.generated.h"

UENUM(BlueprintType)
enum class ETunnelNodeType : uint8 {
    Source,
    Terminal,
};

