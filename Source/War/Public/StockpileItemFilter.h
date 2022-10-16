#pragma once
#include "CoreMinimal.h"
#include "StockpileItemFilter.generated.h"

USTRUCT(BlueprintType)
struct FStockpileItemFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemHolderSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantityToSubmit;
    
    WAR_API FStockpileItemFilter();
};

