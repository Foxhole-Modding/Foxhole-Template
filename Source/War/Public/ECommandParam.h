#pragma once
#include "CoreMinimal.h"
#include "ECommandParam.generated.h"

UENUM(BlueprintType)
enum class ECommandParam : uint8 {
    Bool,
    Int,
    Float,
    String,
    MultiwordString,
    IntArray,
    StringArray,
    Enum,
};

