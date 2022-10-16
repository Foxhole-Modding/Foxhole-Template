#pragma once
#include "CoreMinimal.h"
#include "ExplosiveAmmoPickup.h"
#include "TankAmmoPickup.generated.h"

UCLASS(Blueprintable)
class WAR_API ATankAmmoPickup : public AExplosiveAmmoPickup {
    GENERATED_BODY()
public:
    ATankAmmoPickup();
};

