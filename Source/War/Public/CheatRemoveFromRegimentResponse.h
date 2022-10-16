#pragma once
#include "CoreMinimal.h"
#include "CheatRemoveFromRegimentRequest.h"
#include "CheatRemoveFromRegimentResponse.generated.h"

USTRUCT(BlueprintType)
struct FCheatRemoveFromRegimentResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatRemoveFromRegimentRequest Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuccess;
    
    WAR_API FCheatRemoveFromRegimentResponse();
};

