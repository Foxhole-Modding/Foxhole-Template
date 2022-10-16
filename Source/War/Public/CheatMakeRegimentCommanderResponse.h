#pragma once
#include "CoreMinimal.h"
#include "CheatMakeRegimentCommanderRequest.h"
#include "CheatMakeRegimentCommanderResponse.generated.h"

USTRUCT(BlueprintType)
struct FCheatMakeRegimentCommanderResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatMakeRegimentCommanderRequest Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuccess;
    
    WAR_API FCheatMakeRegimentCommanderResponse();
};

