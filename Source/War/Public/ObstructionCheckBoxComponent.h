#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "ObstructionCheckBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UObstructionCheckBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UObstructionCheckBoxComponent();
};

