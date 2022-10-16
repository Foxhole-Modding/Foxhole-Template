#pragma once
#include "CoreMinimal.h"
#include "MapPostVoteResponse.generated.h"

USTRUCT(BlueprintType)
struct FMapPostVoteResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    WAR_API FMapPostVoteResponse();
};

