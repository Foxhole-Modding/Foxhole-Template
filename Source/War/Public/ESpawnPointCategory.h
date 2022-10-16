#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointCategory.generated.h"

UENUM(BlueprintType)
enum class ESpawnPointCategory : uint8 {
    None,
    StaticBase,
    ForwardBase,
    Count,
};

