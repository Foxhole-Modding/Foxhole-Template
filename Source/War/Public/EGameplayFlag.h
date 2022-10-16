#pragma once
#include "CoreMinimal.h"
#include "EGameplayFlag.generated.h"

UENUM(BlueprintType)
enum class EGameplayFlag : uint8 {
    TrainingGrounds,
    Festival,
    Zombie,
    Stronghold,
    LetItSnow,
    Relic,
    MAX,
};

