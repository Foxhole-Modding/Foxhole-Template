#pragma once
#include "CoreMinimal.h"
#include "VoteKickRequest.h"
#include "PlayerVoteBannedMessage.generated.h"

USTRUCT(BlueprintType)
struct FPlayerVoteBannedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoteKickRequest VoteKickRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSenderServer;
    
    UPROPERTY(EditAnywhere)
    int64 BanDurationSec;
    
    WAR_API FPlayerVoteBannedMessage();
};

