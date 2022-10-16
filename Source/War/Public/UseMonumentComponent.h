#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "UseMonumentComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UUseMonumentComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UUseMonumentComponent();
};

