#pragma once
#include "CoreMinimal.h"
#include "SimPainCausingVolume.h"
#include "SimWaterVolume.generated.h"

UCLASS(Blueprintable)
class WAR_API ASimWaterVolume : public ASimPainCausingVolume {
    GENERATED_BODY()
public:
    ASimWaterVolume();
};

