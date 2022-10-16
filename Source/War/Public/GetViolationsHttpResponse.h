#pragma once
#include "CoreMinimal.h"
#include "ViolationEvent.h"
#include "GetViolationsHttpResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetViolationsHttpResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FViolationEvent> EventList;
    
    WAR_API FGetViolationsHttpResponse();
};

