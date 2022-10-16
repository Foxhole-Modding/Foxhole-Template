#pragma once
#include "CoreMinimal.h"
#include "StockpileUserComponent.h"
#include "ReplicatedStockpileUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UReplicatedStockpileUserComponent : public UStockpileUserComponent {
    GENERATED_BODY()
public:
    UReplicatedStockpileUserComponent();
};

