#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "HarvestDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHarvestDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UHarvestDamageType();
};

