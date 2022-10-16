#pragma once
#include "CoreMinimal.h"
#include "GetBanAndProfileRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetBanAndProfileRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    WAR_API FGetBanAndProfileRequest();
};

