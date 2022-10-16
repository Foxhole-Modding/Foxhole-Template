#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "MapItemDetails.h"
#include "UObjectHandle.h"
#include "RPCMapItemResponse.generated.h"

USTRUCT(BlueprintType)
struct FRPCMapItemResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Requester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle MapItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapItemDetails MapItemDetails;
    
    WAR_API FRPCMapItemResponse();
};

