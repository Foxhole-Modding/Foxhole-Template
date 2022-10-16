#pragma once
#include "CoreMinimal.h"
#include "CheatRemoveFromSquadRequest.generated.h"

USTRUCT(BlueprintType)
struct FCheatRemoveFromSquadRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    WAR_API FCheatRemoveFromSquadRequest();
};

