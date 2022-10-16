#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VehicleExitComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UVehicleExitComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UVehicleExitComponent();
};

