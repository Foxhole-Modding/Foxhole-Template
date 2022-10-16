#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "WeatherEventStyle.generated.h"

USTRUCT(BlueprintType)
struct FWeatherEventStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    WAR_API FWeatherEventStyle();
};

