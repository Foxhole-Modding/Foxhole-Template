#pragma once
#include "CoreMinimal.h"
#include "ModificationSlotComponent.h"
#include "InfraModificationSlotComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UInfraModificationSlotComponent : public UModificationSlotComponent {
    GENERATED_BODY()
public:
    UInfraModificationSlotComponent();
};

