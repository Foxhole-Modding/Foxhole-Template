#pragma once
#include "CoreMinimal.h"
#include "ERefineryOrderAccessLevel.h"
#include "RefinementOrder.h"
#include "RefinementOrderInfo.generated.h"

USTRUCT(BlueprintType)
struct FRefinementOrderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ERefineryOrderAccessLevel AccessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRefinementOrder> OrderList;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int64 ExpiryTimestampTicks;
    
    WAR_API FRefinementOrderInfo();
};

