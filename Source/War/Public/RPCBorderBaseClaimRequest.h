#pragma once
#include "CoreMinimal.h"
#include "UObjectHandle.h"
#include "EFactionId.h"
#include "EWorldConquestMapId.h"
#include "RPCBorderBaseClaimRequest.generated.h"

USTRUCT(BlueprintType)
struct FRPCBorderBaseClaimRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle ObjectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId OriginMapID;
    
    UPROPERTY(EditAnywhere)
    uint8 RoadID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId ClaimingFaction;
    
    WAR_API FRPCBorderBaseClaimRequest();
};

