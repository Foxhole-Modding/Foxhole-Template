#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "UObjectHandle.h"
#include "RPCRegionZoneRequest.generated.h"

USTRUCT(BlueprintType)
struct FRPCRegionZoneRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Requester;
    
    WAR_API FRPCRegionZoneRequest();
};

