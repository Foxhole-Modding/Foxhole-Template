#pragma once
#include "CoreMinimal.h"
#include "EShippableType.generated.h"

UENUM(BlueprintType)
enum class EShippableType : uint8 {
    None,
    Small,
    Normal,
    Large,
    ExtraLarge,
};

