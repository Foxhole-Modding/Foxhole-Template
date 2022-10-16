#pragma once
#include "CoreMinimal.h"
#include "EWorldConquestMapId.h"
#include "EWeatherType.h"
#include "UObject/NoExportTypes.h"
#include "WeatherState.generated.h"

USTRUCT(BlueprintType)
struct FWeatherState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldConquestMapId MapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeatherType Type;
    
    UPROPERTY(EditAnywhere)
    uint8 Intensity;
    
    UPROPERTY(EditAnywhere)
    uint8 PeakIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D WorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRadius;
    
    WAR_API FWeatherState();
};

