#pragma once
#include "CoreMinimal.h"
#include "ConstructionSite.h"
#include "VehicleFactory.generated.h"

UCLASS(Blueprintable)
class WAR_API AVehicleFactory : public AConstructionSite {
    GENERATED_BODY()
public:
    AVehicleFactory();
};

