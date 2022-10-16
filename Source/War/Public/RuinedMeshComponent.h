#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "RuinedMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URuinedMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    URuinedMeshComponent();
};

