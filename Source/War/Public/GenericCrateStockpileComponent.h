#pragma once
#include "CoreMinimal.h"
#include "GenericStockpileComponent.h"
#include "GenericCrateStockpileComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UGenericCrateStockpileComponent : public UGenericStockpileComponent {
    GENERATED_BODY()
public:
    UGenericCrateStockpileComponent();
};

