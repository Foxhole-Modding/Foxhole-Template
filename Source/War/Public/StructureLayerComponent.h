#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StructureLayerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UStructureLayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 IncludedInLayers;
    
    UPROPERTY(EditAnywhere)
    uint32 ExcludedByLayers;
    
    UStructureLayerComponent();
};

