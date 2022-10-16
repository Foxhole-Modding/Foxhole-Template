#pragma once
#include "CoreMinimal.h"
#include "StockpileEntry.h"
#include "UserComponent.h"
#include "EStockpileEntryType.h"
#include "StockpileUserComponent.generated.h"

class UGenericStockpileComponent;
class UActorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UStockpileUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Items, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Items, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> ReservableItemCrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Vehicles, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Vehicles, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> VehicleCrates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Structures, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Structures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Structures, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> StructureCrates;
    
public:
    UStockpileUserComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBeginRetrieve(UActorComponent* RetrieveFromStockpileComponent, UGenericStockpileComponent* RetrieveToStockpileComponent, const FString& StockpileName, const FName CodeName, const EStockpileEntryType EntryType, const bool bIsRetrievingMulti);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Vehicles();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_VehicleCrates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Structures();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StructureCrates();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Items();
    
};

