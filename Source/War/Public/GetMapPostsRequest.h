#pragma once
#include "CoreMinimal.h"
#include "GetMapPostsRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetMapPostsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsModModeOn;
    
    WAR_API FGetMapPostsRequest();
};

