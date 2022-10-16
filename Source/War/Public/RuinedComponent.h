#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RuinedComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URuinedComponent : public USceneComponent {
    GENERATED_BODY()
public:
    URuinedComponent();
};

