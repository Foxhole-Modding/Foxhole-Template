#pragma once
#include "CoreMinimal.h"
#include "ERefineryOrderAccessLevel.generated.h"

UENUM(BlueprintType)
enum class ERefineryOrderAccessLevel : uint8 {
    Personal,
    Public,
    Count,
};

