#pragma once
#include "CoreMinimal.h"
#include "EItemRequisitionType.generated.h"

UENUM(BlueprintType)
enum class EItemRequisitionType : uint8 {
    Open,
    Coalition,
    MainEquipment,
    ExtraEquipment,
    Ammo,
    Consumable,
    NumTypes,
};

