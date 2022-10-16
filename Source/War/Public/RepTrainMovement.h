#pragma once
#include "CoreMinimal.h"
#include "RepRailwayMovement.h"
#include "RepTrainMovement.generated.h"

USTRUCT(BlueprintType)
struct FRepTrainMovement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRepRailwayMovement> Cars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdateTime;
    
    UPROPERTY(EditAnywhere)
    int8 Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsBoosting: 1;
    
    WAR_API FRepTrainMovement();
};

