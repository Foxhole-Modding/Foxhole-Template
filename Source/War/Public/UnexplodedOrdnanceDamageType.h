#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "UnexplodedOrdnanceDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UUnexplodedOrdnanceDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UUnexplodedOrdnanceDamageType();
};

