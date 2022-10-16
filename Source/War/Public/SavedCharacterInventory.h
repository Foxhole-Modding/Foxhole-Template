#pragma once
#include "CoreMinimal.h"
#include "ItemInstance.h"
#include "SavedCharacterInventory.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharacterInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> BagItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> EquippedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideStarterGear;
    
    WAR_API FSavedCharacterInventory();
};

