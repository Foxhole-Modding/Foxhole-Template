#pragma once
#include "CoreMinimal.h"
#include "AnalyticsEvent.h"
#include "GetAnalyticsEventsResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetAnalyticsEventsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticsEvent> EventList;
    
    WAR_API FGetAnalyticsEventsResponse();
};

