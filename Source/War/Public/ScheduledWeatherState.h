#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeatherState.h"
#include "UObject/NoExportTypes.h"
#include "ScheduledWeatherState.generated.h"

USTRUCT(BlueprintType)
struct FScheduledWeatherState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NormalizedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndTime;
    
    UPROPERTY(EditAnywhere)
    int8 IntensityCurve;
    
    WAR_API FScheduledWeatherState();
};

