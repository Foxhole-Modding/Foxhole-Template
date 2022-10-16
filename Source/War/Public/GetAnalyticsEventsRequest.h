#pragma once
#include "CoreMinimal.h"
#include "EAnalyticsEventType.h"
#include "GetAnalyticsEventsRequest.generated.h"

USTRUCT(BlueprintType)
struct FGetAnalyticsEventsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WarId;
    
    UPROPERTY(EditAnywhere)
    EAnalyticsEventType EventType;
    
    WAR_API FGetAnalyticsEventsRequest();
};

