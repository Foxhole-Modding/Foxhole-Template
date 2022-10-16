#pragma once
#include "CoreMinimal.h"
#include "GearPickup.h"
#include "EEquipmentSlot.h"
#include "AccessoryPickup.generated.h"

UCLASS(Blueprintable)
class WAR_API AAccessoryPickup : public AGearPickup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlot SlotToAccessorize;
    
    AAccessoryPickup();
};

