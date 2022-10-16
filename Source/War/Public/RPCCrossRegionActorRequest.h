#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "RPCCrossRegionActorRequest.generated.h"

USTRUCT(BlueprintType)
struct FRPCCrossRegionActorRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId RequestingServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Ids;
    
    WAR_API FRPCCrossRegionActorRequest();
};

