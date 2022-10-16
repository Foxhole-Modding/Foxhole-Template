#pragma once
#include "CoreMinimal.h"
#include "TrainInfo.generated.h"

class ARailVehicle;

USTRUCT(BlueprintType)
struct FTrainInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARailVehicle* Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARailVehicle* Back;
    
    WAR_API FTrainInfo();
};

