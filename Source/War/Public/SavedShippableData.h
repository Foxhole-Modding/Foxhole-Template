#pragma once
#include "CoreMinimal.h"
#include "StockpileEntry.h"
#include "ItemInstance.h"
#include "SavedShippableData.generated.h"

USTRUCT(BlueprintType)
struct FSavedShippableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ContainedCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> StoredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> ItemCrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> ReservableItemCrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Fuel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName FuelType;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 Payload;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 AltPayload;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 Temperature;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsReservable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 TankArmour;
    
    WAR_API FSavedShippableData();
};

