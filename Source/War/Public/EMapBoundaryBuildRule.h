#pragma once
#include "CoreMinimal.h"
#include "EMapBoundaryBuildRule.generated.h"

UENUM(BlueprintType)
enum class EMapBoundaryBuildRule : uint8 {
    NotBuildableNearBorder,
    OnlyBuildableNearBorder,
    OptionallyBuildableNearBorder,
};

