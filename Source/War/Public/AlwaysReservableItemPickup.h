#pragma once
#include "CoreMinimal.h"
#include "BasicItemPickup.h"
#include "AlwaysReservableItemPickup.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AAlwaysReservableItemPickup : public ABasicItemPickup {
    GENERATED_BODY()
public:
    AAlwaysReservableItemPickup();
};

