#pragma once
#include "CoreMinimal.h"
#include "ReassignSquadLeaderWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FReassignSquadLeaderWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewLeaderOnlineID;
    
    WAR_API FReassignSquadLeaderWarMessage();
};

