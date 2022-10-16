#pragma once
#include "CoreMinimal.h"
#include "ExplosiveAmmoPickup.h"
#include "MortarAmmoPickup.generated.h"

UCLASS(Blueprintable)
class WAR_API AMortarAmmoPickup : public AExplosiveAmmoPickup {
    GENERATED_BODY()
public:
    AMortarAmmoPickup();
};

