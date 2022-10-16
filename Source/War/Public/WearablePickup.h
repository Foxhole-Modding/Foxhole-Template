#pragma once
#include "CoreMinimal.h"
#include "ItemPickup.h"
#include "WearablePickup.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AWearablePickup : public AItemPickup {
    GENERATED_BODY()
public:
    AWearablePickup();
};

