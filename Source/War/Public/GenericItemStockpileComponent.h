#pragma once
#include "CoreMinimal.h"
#include "GenericStockpileComponent.h"
#include "GenericItemStockpileComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UGenericItemStockpileComponent : public UGenericStockpileComponent {
    GENERATED_BODY()
public:
    UGenericItemStockpileComponent();
};

