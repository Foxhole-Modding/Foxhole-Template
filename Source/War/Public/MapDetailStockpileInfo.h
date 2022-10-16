#pragma once
#include "CoreMinimal.h"
#include "StockpileEntry.h"
#include "MapDetailStockpileInfo.generated.h"

USTRUCT(BlueprintType)
struct FMapDetailStockpileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> ItemCrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> VehicleCrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Structures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> StructureCrates;
    
    WAR_API FMapDetailStockpileInfo();
};

