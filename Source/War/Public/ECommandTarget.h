#pragma once
#include "CoreMinimal.h"
#include "ECommandTarget.generated.h"

UENUM(BlueprintType)
enum class ECommandTarget : uint8 {
    LocalOnly,
    Global,
    GlobalSingleServer,
    Invalid,
};

