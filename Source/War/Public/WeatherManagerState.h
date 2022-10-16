#pragma once
#include "CoreMinimal.h"
#include "WorldWeatherState.h"
#include "ScheduledWeatherState.h"
#include "WeatherManagerState.generated.h"

USTRUCT(BlueprintType)
struct FWeatherManagerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldWeatherState WorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScheduledWeatherState> StateTimes;
    
    WAR_API FWeatherManagerState();
};

