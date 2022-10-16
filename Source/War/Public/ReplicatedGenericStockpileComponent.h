#pragma once
#include "CoreMinimal.h"
#include "GenericStockpileComponent.h"
#include "ReplicatedGenericStockpileComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UReplicatedGenericStockpileComponent : public UGenericStockpileComponent {
    GENERATED_BODY()
public:
    UReplicatedGenericStockpileComponent();
};

