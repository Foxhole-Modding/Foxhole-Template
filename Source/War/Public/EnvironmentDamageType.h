#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "EnvironmentDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEnvironmentDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UEnvironmentDamageType();
};

