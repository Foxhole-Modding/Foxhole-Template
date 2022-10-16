#pragma once
#include "CoreMinimal.h"
#include "ERegimentRole.h"
#include "RegimentChangeRoleMessage.generated.h"

USTRUCT(BlueprintType)
struct FRegimentChangeRoleMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    UPROPERTY(EditAnywhere)
    ERegimentRole DesiredTargetRole;
    
    WAR_API FRegimentChangeRoleMessage();
};

