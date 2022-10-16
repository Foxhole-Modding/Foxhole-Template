#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "CrossRegionActorData.h"
#include "RPCCrossRegionChangelistBroadcast.generated.h"

USTRUCT(BlueprintType)
struct FRPCCrossRegionChangelistBroadcast {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId OriginServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrossRegionActorData> NewActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RemovedActors;
    
    WAR_API FRPCCrossRegionChangelistBroadcast();
};

