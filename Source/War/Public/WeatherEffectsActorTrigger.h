#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeatherEffectsActorTrigger.generated.h"

class AWeatherEffectsActor;

USTRUCT(BlueprintType)
struct FWeatherEffectsActorTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeatherEffectsActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensityThreshold;
    
    WAR_API FWeatherEffectsActorTrigger();
};

