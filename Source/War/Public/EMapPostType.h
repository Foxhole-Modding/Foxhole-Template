#pragma once
#include "CoreMinimal.h"
#include "EMapPostType.generated.h"

UENUM()
enum class EMapPostType : int8 {
    Public,
    Squad,
    Regiment,
    Count,
};

