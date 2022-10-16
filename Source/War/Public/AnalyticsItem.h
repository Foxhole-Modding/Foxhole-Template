#pragma once
#include "CoreMinimal.h"
#include "AnalyticsItem.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    WAR_API FAnalyticsItem();
};

