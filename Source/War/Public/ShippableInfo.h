#pragma once
#include "CoreMinimal.h"
#include "EShippableType.h"
#include "ShippableInfo.generated.h"

USTRUCT(BlueprintType)
struct FShippableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EShippableType Type;
    
    WAR_API FShippableInfo();
};

