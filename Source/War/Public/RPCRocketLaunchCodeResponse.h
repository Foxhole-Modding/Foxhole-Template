#pragma once
#include "CoreMinimal.h"
#include "WarGridCoordinate.h"
#include "EWorldConquestMapId.h"
#include "Engine/NetSerialization.h"
#include "RPCRocketLaunchCodeResponse.generated.h"

USTRUCT(BlueprintType)
struct FRPCRocketLaunchCodeResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(EditAnywhere)
    uint8 LaunchCodeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasStrikeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize StrikeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarGridCoordinate Coordinate;
    
    WAR_API FRPCRocketLaunchCodeResponse();
};

