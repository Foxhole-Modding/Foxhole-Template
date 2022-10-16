#pragma once
#include "CoreMinimal.h"
#include "DestroyedConstructionSite.h"
#include "DestroyedVehicleFactory.generated.h"

UCLASS(Blueprintable)
class WAR_API ADestroyedVehicleFactory : public ADestroyedConstructionSite {
    GENERATED_BODY()
public:
    ADestroyedVehicleFactory();
};

