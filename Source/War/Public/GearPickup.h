#pragma once
#include "CoreMinimal.h"
#include "ItemPickup.h"
#include "GearPickup.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AGearPickup : public AItemPickup {
    GENERATED_BODY()
public:
    AGearPickup();
};

