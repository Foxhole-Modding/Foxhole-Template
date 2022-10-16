#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WaterReloadSourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWaterReloadSourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UWaterReloadSourceComponent();
};

