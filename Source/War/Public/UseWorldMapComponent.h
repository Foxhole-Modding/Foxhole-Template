#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "UseWorldMapComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UUseWorldMapComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UUseWorldMapComponent();
};

