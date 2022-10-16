#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "DrawStructureLayerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UDrawStructureLayerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UDrawStructureLayerComponent();
};

