#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WeatherPattern.h"
#include "WeatherData.generated.h"

UCLASS(Blueprintable)
class WAR_API UWeatherData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeatherPattern> WeatherPatterns;
    
    UWeatherData();
};

