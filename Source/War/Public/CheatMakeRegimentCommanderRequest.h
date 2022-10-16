#pragma once
#include "CoreMinimal.h"
#include "UObjectHandle.h"
#include "CheatMakeRegimentCommanderRequest.generated.h"

USTRUCT(BlueprintType)
struct FCheatMakeRegimentCommanderRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Admin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentCommanderOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewCommanderOnlineID;
    
    WAR_API FCheatMakeRegimentCommanderRequest();
};

