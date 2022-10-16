#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "RocketLaunchCodeInfo.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FRocketLaunchCodeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId LaunchCodeRegion;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 LaunchCodeID;
    
    FRocketLaunchCodeInfo();
};

