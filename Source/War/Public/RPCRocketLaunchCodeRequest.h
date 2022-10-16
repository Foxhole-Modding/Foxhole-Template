#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "EWorldConquestMapId.h"
#include "RPCRocketLaunchCodeRequest.generated.h"

USTRUCT(BlueprintType)
struct FRPCRocketLaunchCodeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(EditAnywhere)
    uint8 LaunchCodeID;
    
    WAR_API FRPCRocketLaunchCodeRequest();
};

