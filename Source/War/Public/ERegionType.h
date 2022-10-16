#pragma once
#include "CoreMinimal.h"
#include "ERegionType.generated.h"

UENUM()
enum class ERegionType : int32 {
    All,
    Global,
    Americas,
    China,
    Europe,
    Germany,
    Russia,
    NumRegionTypes,
};

