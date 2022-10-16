#pragma once
#include "CoreMinimal.h"
#include "EZombieSecondaryAttack.generated.h"

UENUM(BlueprintType)
enum class EZombieSecondaryAttack : uint8 {
    None,
    Ranged,
    FrontalAOE,
};

