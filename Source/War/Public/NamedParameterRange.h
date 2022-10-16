#pragma once
#include "CoreMinimal.h"
#include "NamedParameterRange.generated.h"

USTRUCT(BlueprintType)
struct FNamedParameterRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float End;
    
    WAR_API FNamedParameterRange();
};

