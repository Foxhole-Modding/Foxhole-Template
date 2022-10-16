#pragma once
#include "CoreMinimal.h"
#include "GearPickup.h"
#include "FirearmPickup.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AFirearmPickup : public AGearPickup {
    GENERATED_BODY()
public:
    AFirearmPickup();
};

