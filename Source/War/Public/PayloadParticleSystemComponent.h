#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleSystemComponent.h"
#include "PayloadMeshGroup.h"
#include "PayloadParticleSystemComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UPayloadParticleSystemComponent : public UParticleSystemComponent, public IPayloadMeshGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 SlotCount;
    
    UPROPERTY(EditAnywhere)
    uint8 GroupIndex;
    
    UPayloadParticleSystemComponent();
    
    // Fix for true pure virtual functions not being implemented
};

