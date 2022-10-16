#pragma once
#include "CoreMinimal.h"
#include "ESimCharacterStance.generated.h"

UENUM(BlueprintType)
enum class ESimCharacterStance : uint8 {
    Standing,
    Crouched,
    Prone,
    Sprinting,
    NumStates,
};

