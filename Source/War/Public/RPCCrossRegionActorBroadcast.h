#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "RPCCrossRegionActorBroadcast.generated.h"

USTRUCT(BlueprintType)
struct FRPCCrossRegionActorBroadcast {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId OriginServer;
    
    UPROPERTY(EditAnywhere)
    int64 InitTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Ids;
    
    WAR_API FRPCCrossRegionActorBroadcast();
};

