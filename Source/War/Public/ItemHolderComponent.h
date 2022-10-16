#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EInventoryType.h"
#include "ItemHolderComponent.generated.h"

class AItemPickup;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UItemHolderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInventoryType InventoryType;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int16 NextHolderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RestrictedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CustomStackableItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAllItemsAreStackable;
    
public:
    UItemHolderComponent();
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientImportItem(const AItemPickup* ItemCDO);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientExportItem(const int32 SlotIndex);
    
};

