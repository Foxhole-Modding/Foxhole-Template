#pragma once
#include "CoreMinimal.h"
#include "ELimbIK.generated.h"

UENUM(BlueprintType)
enum class ELimbIK : uint8 {
    LeftHand,
    RightHand,
    LeftFoot,
    RightFoot,
    NumTypes,
    None,
};

