#pragma once
#include "CoreMinimal.h"
#include "RocketBuildRequest.generated.h"

class ARocketFacility;

USTRUCT(BlueprintType)
struct WAR_API FRocketBuildRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARocketFacility* RocketFacility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    FRocketBuildRequest();
};

