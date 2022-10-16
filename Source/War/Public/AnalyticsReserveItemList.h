#pragma once
#include "CoreMinimal.h"
#include "AnalyticsItemList.h"
#include "AnalyticsReserveItemList.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsReserveItemList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StockpileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnalyticsItemList ItemList;
    
    WAR_API FAnalyticsReserveItemList();
};

