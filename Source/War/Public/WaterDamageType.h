#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "WaterDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UWaterDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UWaterDamageType();
};

