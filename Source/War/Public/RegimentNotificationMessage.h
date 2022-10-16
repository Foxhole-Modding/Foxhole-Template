#pragma once
#include "CoreMinimal.h"
#include "ERegimentNotificationType.h"
#include "ERegimentRole.h"
#include "RegimentNotificationMessage.generated.h"

USTRUCT(BlueprintType)
struct FRegimentNotificationMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    UPROPERTY(EditAnywhere)
    ERegimentNotificationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetPlayerName;
    
    UPROPERTY(EditAnywhere)
    ERegimentRole NewRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewRegimentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewRegimentTag;
    
    WAR_API FRegimentNotificationMessage();
};

