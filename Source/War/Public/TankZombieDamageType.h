#pragma once
#include "CoreMinimal.h"
#include "SimDamageType.h"
#include "TankZombieDamageType.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTankZombieDamageType : public USimDamageType {
    GENERATED_BODY()
public:
    UTankZombieDamageType();
};

