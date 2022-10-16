#pragma once
#include "CoreMinimal.h"
#include "InviteToRegimentMessage.h"
#include "AcceptInviteToRegimentMessage.generated.h"

USTRUCT(BlueprintType)
struct FAcceptInviteToRegimentMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInviteToRegimentMessage InviteToAccept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetPlayerName;
    
    WAR_API FAcceptInviteToRegimentMessage();
};

