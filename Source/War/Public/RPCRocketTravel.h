#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "EWorldConquestMapId.h"
#include "RocketLaunchCodeInfo.h"
#include "Engine/NetSerialization.h"
#include "RPCRocketTravel.generated.h"

USTRUCT(BlueprintType)
struct FRPCRocketTravel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRocketLaunchCodeInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize StrikeLocation;
    
    WAR_API FRPCRocketTravel();
};

