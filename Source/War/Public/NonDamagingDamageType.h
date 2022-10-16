#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "NonDamagingDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNonDamagingDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UNonDamagingDamageType();
};

