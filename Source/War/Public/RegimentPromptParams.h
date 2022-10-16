#pragma once
#include "CoreMinimal.h"
#include "RegimentPromptParams.generated.h"

USTRUCT(BlueprintType)
struct FRegimentPromptParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Link;
    
    WAR_API FRegimentPromptParams();
};

