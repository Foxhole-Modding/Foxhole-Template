#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "EWorldConquestMapId.h"
#include "UObjectHandle.h"
#include "RPCMapItemRequest.generated.h"

USTRUCT(BlueprintType)
struct FRPCMapItemRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId Origin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId RequesterFactionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequesterOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Requester;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle MapItem;
    
    WAR_API FRPCMapItemRequest();
};

