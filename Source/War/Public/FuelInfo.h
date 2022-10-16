#pragma once
#include "CoreMinimal.h"
#include "FuelTank.h"
#include "FuelInfo.generated.h"

USTRUCT(BlueprintType)
struct FFuelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FFuelTank Tank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float ConsumptionRate;
    
    WAR_API FFuelInfo();
};

