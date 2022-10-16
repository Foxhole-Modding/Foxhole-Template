#pragma once
#include "CoreMinimal.h"
#include "SplineConnectorMeshConfigPoint.generated.h"

USTRUCT(BlueprintType)
struct FSplineConnectorMeshConfigPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPrevDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinNextDistance;
    
    WAR_API FSplineConnectorMeshConfigPoint();
};

