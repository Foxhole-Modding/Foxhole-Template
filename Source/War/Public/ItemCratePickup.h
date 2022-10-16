#pragma once
#include "CoreMinimal.h"
#include "ItemPickup.h"
#include "ItemCratePickup.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AItemCratePickup : public AItemPickup {
    GENERATED_BODY()
public:
    AItemCratePickup();
};

