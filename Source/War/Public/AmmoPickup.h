#pragma once
#include "CoreMinimal.h"
#include "BasicItemPickup.h"
#include "AmmoPickup.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AAmmoPickup : public ABasicItemPickup {
    GENERATED_BODY()
public:
    AAmmoPickup();
};

