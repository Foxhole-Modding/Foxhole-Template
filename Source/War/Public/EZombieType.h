#pragma once
#include "CoreMinimal.h"
#include "EZombieType.generated.h"

UENUM(BlueprintType)
enum class EZombieType : uint8 {
    None,
    Regular,
    Spitter,
    Tank,
    Count,
};

