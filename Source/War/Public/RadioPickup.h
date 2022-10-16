#pragma once
#include "CoreMinimal.h"
#include "BasicItemPickup.h"
#include "RadioPickup.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API ARadioPickup : public ABasicItemPickup {
    GENERATED_BODY()
public:
    ARadioPickup();
};

