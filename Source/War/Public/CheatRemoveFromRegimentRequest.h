#pragma once
#include "CoreMinimal.h"
#include "UObjectHandle.h"
#include "CheatRemoveFromRegimentRequest.generated.h"

USTRUCT(BlueprintType)
struct FCheatRemoveFromRegimentRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Admin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    WAR_API FCheatRemoveFromRegimentRequest();
};

