#pragma once
#include "CoreMinimal.h"
#include "DecayInfo.generated.h"

USTRUCT(BlueprintType)
struct FDecayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int16 GSConsumedLastHour;
    
    UPROPERTY(EditAnywhere)
    int16 BSConsumedLastHour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SupplySurplusBonus;
    
    WAR_API FDecayInfo();
};

