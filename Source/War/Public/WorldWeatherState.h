#pragma once
#include "CoreMinimal.h"
#include "WeatherState.h"
#include "WorldWeatherState.generated.h"

USTRUCT(BlueprintType)
struct FWorldWeatherState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeatherState GameplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherState> States;
    
    WAR_API FWorldWeatherState();
};

