#pragma once
#include "CoreMinimal.h"
#include "AnalayticsReleaseReserveStockpileItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalayticsReleaseReserveStockpileItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StockpileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalQuantity;
    
    WAR_API FAnalayticsReleaseReserveStockpileItemInfo();
};

