#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointPriority.generated.h"

UENUM(BlueprintType)
enum class ESpawnPointPriority : uint8 {
    High,
    Low,
};

