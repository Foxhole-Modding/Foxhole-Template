#pragma once
#include "CoreMinimal.h"
#include "EMapPostVoteType.h"
#include "MapPostVote.generated.h"

USTRUCT(BlueprintType)
struct FMapPostVote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoterOnlineID;
    
    UPROPERTY(EditAnywhere)
    EMapPostVoteType VoteType;
    
    WAR_API FMapPostVote();
};

