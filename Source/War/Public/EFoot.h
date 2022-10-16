#pragma once
#include "CoreMinimal.h"
#include "EFoot.generated.h"

UENUM(BlueprintType)
enum class EFoot : uint8 {
    Left,
    Right,
    NumTypes,
    None,
};

