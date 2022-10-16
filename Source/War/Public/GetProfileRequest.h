#pragma once
#include "CoreMinimal.h"
#include "GetProfileRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetProfileRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    WAR_API FGetProfileRequest();
};

