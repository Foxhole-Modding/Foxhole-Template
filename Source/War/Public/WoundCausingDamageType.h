#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "WoundCausingDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UWoundCausingDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UWoundCausingDamageType();
};

