#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "VehicleTriggerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UVehicleTriggerComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UVehicleTriggerComponent();
};

