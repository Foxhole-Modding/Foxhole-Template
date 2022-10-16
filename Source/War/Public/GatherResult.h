#pragma once
#include "CoreMinimal.h"
#include "GatherResult.generated.h"

USTRUCT(BlueprintType)
struct FGatherResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResourceCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GatheredAmount;
    
    WAR_API FGatherResult();
};

