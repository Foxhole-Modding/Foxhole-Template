#pragma once
#include "CoreMinimal.h"
#include "MapDetailStockpileInfo.h"
#include "ReserveStockpileMapDetailInfo.generated.h"

USTRUCT(BlueprintType)
struct FReserveStockpileMapDetailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StockpileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapDetailStockpileInfo StockpileInfo;
    
    WAR_API FReserveStockpileMapDetailInfo();
};

