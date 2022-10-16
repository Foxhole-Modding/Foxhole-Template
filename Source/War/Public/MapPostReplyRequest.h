#pragma once
#include "CoreMinimal.h"
#include "MapPostReplyRequest.generated.h"

USTRUCT(BlueprintType)
struct FMapPostReplyRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalPosterOnlineId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplyText;
    
    WAR_API FMapPostReplyRequest();
};

