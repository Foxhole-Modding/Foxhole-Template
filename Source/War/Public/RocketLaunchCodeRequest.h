#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "RocketLaunchCodeRequest.generated.h"

class ARocketFacility;

USTRUCT(BlueprintType)
struct WAR_API FRocketLaunchCodeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARocketFacility* RocketFacility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId LaunchCodeRegion;
    
    UPROPERTY(EditAnywhere)
    uint8 LaunchCodeID;
    
    FRocketLaunchCodeRequest();
};

