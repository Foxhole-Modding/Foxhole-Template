#pragma once
#include "CoreMinimal.h"
#include "ReserveStockpileMapDetailInfo.h"
#include "MapDetailStockpileInfo.h"
#include "MapItemDetails.generated.h"

USTRUCT(BlueprintType)
struct FMapItemDetails {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint16 Flags;
    
public:
    UPROPERTY(EditAnywhere)
    int16 DetailValue;
    
    UPROPERTY(EditAnywhere)
    int16 AltDetailValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapDetailStockpileInfo StockpileInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FReserveStockpileMapDetailInfo> ReserveStockpileInfoList;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> Values;
    
    WAR_API FMapItemDetails();
};

