#pragma once
#include "CoreMinimal.h"
#include "ItemPickup.h"
#include "BasicItemPickup.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API ABasicItemPickup : public AItemPickup {
    GENERATED_BODY()
public:
    ABasicItemPickup();
};

