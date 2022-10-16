#pragma once
#include "CoreMinimal.h"
#include "CheatDisbandRegimentRequest.h"
#include "CheatDisbandRegimentResponse.generated.h"

USTRUCT(BlueprintType)
struct FCheatDisbandRegimentResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatDisbandRegimentRequest Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegimentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegimentTag;
    
    WAR_API FCheatDisbandRegimentResponse();
};

