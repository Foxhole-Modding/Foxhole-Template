#pragma once
#include "CoreMinimal.h"
#include "WarBalancer.generated.h"

USTRUCT(BlueprintType)
struct FWarBalancer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumImbalanceIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RunningPopulationImbalancePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAbsoluteMaxPopulation;
    
public:
    WAR_API FWarBalancer();
};

