#pragma once
#include "CoreMinimal.h"
#include "EOutfitType.generated.h"

UENUM(BlueprintType)
enum class EOutfitType : uint8 {
    Invalid,
    Default,
    Press,
    Mod,
    NumOutfits,
};

