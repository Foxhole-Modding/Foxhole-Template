#pragma once
#include "CoreMinimal.h"
#include "GetViolationsHttpRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetViolationsHttpRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    WAR_API FGetViolationsHttpRequest();
};

