#pragma once
#include "CoreMinimal.h"
#include "EBuildSocketTagRule.generated.h"

UENUM()
enum class EBuildSocketTagRule : int32 {
    AffectsBoth,
    AffectsHigherZ,
    AffectsLowerZ,
};

