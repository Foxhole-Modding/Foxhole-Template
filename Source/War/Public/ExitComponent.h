#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "ExitComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UExitComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UExitComponent();
};

