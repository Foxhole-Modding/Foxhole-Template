#pragma once
#include "CoreMinimal.h"
#include "AnalyticsItem.h"
#include "AnalyticsItemList.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsItemList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticsItem> ItemList;
    
    WAR_API FAnalyticsItemList();
};

