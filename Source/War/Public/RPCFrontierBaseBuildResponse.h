#pragma once
#include "CoreMinimal.h"
#include "RPCFrontierBaseBuildRequest.h"
#include "RPCFrontierBaseBuildResponse.generated.h"

USTRUCT(BlueprintType)
struct FRPCFrontierBaseBuildResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRPCFrontierBaseBuildRequest Request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAllowedToBuild;
    
    WAR_API FRPCFrontierBaseBuildResponse();
};

