#pragma once
#include "CoreMinimal.h"
#include "EMapPostVoteType.h"
#include "MapPostVoteRequest.generated.h"

USTRUCT(BlueprintType)
struct FMapPostVoteRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OriginalPosterOnlineId;
    
    UPROPERTY(EditAnywhere)
    EMapPostVoteType VoteType;
    
    WAR_API FMapPostVoteRequest();
};

