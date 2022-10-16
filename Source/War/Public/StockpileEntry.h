#pragma once
#include "CoreMinimal.h"
#include "StockpileEntry.generated.h"

USTRUCT(BlueprintType)
struct FStockpileEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int16 Quantity;
    
    WAR_API FStockpileEntry();
};

