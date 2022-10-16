#pragma once
#include "CoreMinimal.h"
#include "EClientConfigURLType.generated.h"

UENUM(BlueprintType)
enum class EClientConfigURLType : uint8 {
    Live,
    Internal,
    Iteration,
    DevBranch,
};

