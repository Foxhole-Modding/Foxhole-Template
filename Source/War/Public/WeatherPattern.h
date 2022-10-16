#pragma once
#include "CoreMinimal.h"
#include "WeatherEvent.h"
#include "WeatherPattern.generated.h"

USTRUCT(BlueprintType)
struct FWeatherPattern {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherEvent> Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerWarSkipChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPostEventsDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPostEventsDuration;
    
    WAR_API FWeatherPattern();
};

