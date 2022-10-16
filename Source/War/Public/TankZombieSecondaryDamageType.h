#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "TankZombieSecondaryDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTankZombieSecondaryDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UTankZombieSecondaryDamageType();
};

