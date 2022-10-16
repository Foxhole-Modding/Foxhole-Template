#pragma once
#include "CoreMinimal.h"
#include "MapPostReplyResponse.generated.h"

USTRUCT(BlueprintType)
struct FMapPostReplyResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    WAR_API FMapPostReplyResponse();
};

