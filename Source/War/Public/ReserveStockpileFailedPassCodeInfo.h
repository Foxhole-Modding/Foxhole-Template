#pragma once
#include "CoreMinimal.h"
#include "ReserveStockpileFailedPassCodeInfo.generated.h"

USTRUCT(BlueprintType)
struct FReserveStockpileFailedPassCodeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFailedAttempts;
    
    UPROPERTY(EditAnywhere)
    int64 LastAttemptTimestampTicks;
    
    WAR_API FReserveStockpileFailedPassCodeInfo();
};

