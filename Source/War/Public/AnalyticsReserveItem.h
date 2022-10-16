#pragma once
#include "CoreMinimal.h"
#include "AnalyticsItem.h"
#include "AnalyticsReserveItem.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsReserveItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StockpileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnalyticsItem Item;
    
    WAR_API FAnalyticsReserveItem();
};

