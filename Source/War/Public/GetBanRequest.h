#pragma once
#include "CoreMinimal.h"
#include "GetBanRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetBanRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    WAR_API FGetBanRequest();
};

