#pragma once
#include "CoreMinimal.h"
#include "ESeatDirection.generated.h"

UENUM(BlueprintType)
enum class ESeatDirection : uint8 {
    None,
    Bow,
    Center,
    Front,
    Left,
    Rear,
    Right,
    Stern,
    Port,
    Starboard,
    MAX,
};

