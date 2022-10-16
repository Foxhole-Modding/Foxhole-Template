#pragma once
#include "CoreMinimal.h"
#include "CheatGetRegimentInfoRequest.h"
#include "Regiment.h"
#include "CheatGetRegimentInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct FCheatGetRegimentInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatGetRegimentInfoRequest Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRegiment> RegimentList;
    
    WAR_API FCheatGetRegimentInfoResponse();
};

