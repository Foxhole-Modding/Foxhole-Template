#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "DecayDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UDecayDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UDecayDamageType();
};

