#pragma once
#include "CoreMinimal.h"
#include "ESplineFootprintShapeType.generated.h"

UENUM(BlueprintType)
enum class ESplineFootprintShapeType : uint8 {
    Box,
    Capsule,
    CapsuleWithBoxEnds,
};

