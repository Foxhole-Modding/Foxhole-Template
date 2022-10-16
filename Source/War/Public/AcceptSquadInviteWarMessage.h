#pragma once
#include "CoreMinimal.h"
#include "SquadInviteInfo.h"
#include "AcceptSquadInviteWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FAcceptSquadInviteWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadInviteInfo SquadInviteInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewMemberName;
    
    WAR_API FAcceptSquadInviteWarMessage();
};

