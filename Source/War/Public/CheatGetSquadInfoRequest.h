#pragma once
#include "CoreMinimal.h"
#include "CheatGetSquadInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct FCheatGetSquadInfoRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    WAR_API FCheatGetSquadInfoRequest();
};

