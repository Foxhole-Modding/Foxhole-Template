#pragma once
#include "CoreMinimal.h"
#include "ShippableCrate.h"
#include "VehicleCrate.generated.h"

UCLASS(Blueprintable)
class WAR_API AVehicleCrate : public AShippableCrate {
    GENERATED_BODY()
public:
    AVehicleCrate();
};

