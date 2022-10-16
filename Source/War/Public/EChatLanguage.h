#pragma once
#include "CoreMinimal.h"
#include "EChatLanguage.generated.h"

UENUM(BlueprintType)
enum class EChatLanguage : uint8 {
    None,
    English = 0x1,
    Russian,
    Korean = 0x4,
    Chinese = 0x8,
};

