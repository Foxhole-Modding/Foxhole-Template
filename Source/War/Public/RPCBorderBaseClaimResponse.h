#pragma once
#include "CoreMinimal.h"
#include "UObjectHandle.h"
#include "EFactionId.h"
#include "RPCBorderBaseClaimResponse.generated.h"

USTRUCT(BlueprintType)
struct FRPCBorderBaseClaimResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle ObjectHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId ClaimingFaction;
    
private:
    UPROPERTY(EditAnywhere)
    uint8 Response;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowClaimOverride;
    
    WAR_API FRPCBorderBaseClaimResponse();
};

