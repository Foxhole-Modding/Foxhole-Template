#pragma once
#include "CoreMinimal.h"
#include "JoinSquadWarMessage.h"
#include "JoinSquadRequestMessage.generated.h"

USTRUCT(BlueprintType)
struct FJoinSquadRequestMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJoinSquadWarMessage JoinMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderOnlineID;
    
    WAR_API FJoinSquadRequestMessage();
};

