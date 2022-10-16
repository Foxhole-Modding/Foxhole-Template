#pragma once
#include "CoreMinimal.h"
#include "VehicleMapIntelligenceProvider.generated.h"

USTRUCT(BlueprintType)
struct FVehicleMapIntelligenceProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransmitPeriodSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRadius;
    
    WAR_API FVehicleMapIntelligenceProvider();
};

