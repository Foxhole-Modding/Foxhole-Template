#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "RegionMinimalData.h"
#include "UObjectHandle.h"
#include "RPCRegionZoneResponse.generated.h"

USTRUCT(BlueprintType)
struct FRPCRegionZoneResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Requester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegionMinimalData Data;
    
    WAR_API FRPCRegionZoneResponse();
};

