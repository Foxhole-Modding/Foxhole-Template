#pragma once
#include "CoreMinimal.h"
#include "TripodHeightConfig.generated.h"

USTRUCT(BlueprintType)
struct FTripodHeightConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeight;
    
    WAR_API FTripodHeightConfig();
};

