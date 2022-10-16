#pragma once
#include "CoreMinimal.h"
#include "RemoveMemberFromRegimentMessage.generated.h"

USTRUCT(BlueprintType)
struct FRemoveMemberFromRegimentMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MemberToRemoveOnlineId;
    
    WAR_API FRemoveMemberFromRegimentMessage();
};

