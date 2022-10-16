#pragma once
#include "CoreMinimal.h"
#include "ItemInstance.h"
#include "SavedCharacter.generated.h"

USTRUCT(BlueprintType)
struct FSavedCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> BagItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> EquippedItems;
    
    WAR_API FSavedCharacter();
};

