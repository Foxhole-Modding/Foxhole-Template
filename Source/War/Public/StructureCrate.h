#pragma once
#include "CoreMinimal.h"
#include "ShippableCrate.h"
#include "StructureCrate.generated.h"

UCLASS(Blueprintable)
class WAR_API AStructureCrate : public AShippableCrate {
    GENERATED_BODY()
public:
    AStructureCrate();
};

