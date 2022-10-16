#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "TravelPortalComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTravelPortalComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UTravelPortalComponent();
};

