#pragma once
#include "CoreMinimal.h"
#include "ESplineConnectorMeshMode.generated.h"

UENUM()
enum class ESplineConnectorMeshMode : int32 {
    Spline,
    Interval,
    Points,
    Endpoints,
    Boxes,
};

