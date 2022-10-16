#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PayloadMeshGroup.h"
#include "PayloadStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UPayloadStaticMeshComponent : public UStaticMeshComponent, public IPayloadMeshGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 GroupIndex;
    
    UPayloadStaticMeshComponent();
    
    // Fix for true pure virtual functions not being implemented
};

