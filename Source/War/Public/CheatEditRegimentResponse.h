#pragma once
#include "CoreMinimal.h"
#include "CheatEditRegimentRequest.h"
#include "CheatEditRegimentResponse.generated.h"

USTRUCT(BlueprintType)
struct FCheatEditRegimentResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatEditRegimentRequest Request;
    
    WAR_API FCheatEditRegimentResponse();
};

