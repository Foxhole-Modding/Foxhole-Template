#pragma once
#include "CoreMinimal.h"
#include "SquadInviteInfo.h"
#include "SquadInviteWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadInviteWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadInviteInfo SquadInviteInfo;
    
    WAR_API FSquadInviteWarMessage();
};

