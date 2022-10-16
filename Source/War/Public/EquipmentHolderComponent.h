#pragma once
#include "CoreMinimal.h"
#include "ItemHolderComponent.h"
#include "EquipmentHolderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UEquipmentHolderComponent : public UItemHolderComponent {
    GENERATED_BODY()
public:
    UEquipmentHolderComponent();
};

