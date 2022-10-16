#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "GroundZeroDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGroundZeroDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UGroundZeroDamageType();
};

