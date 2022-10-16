#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "PowerGridNode.h"
#include "EFortModificationType.h"
#include "AssemblyItem.h"
#include "FuelQuantity.h"
#include "AssemblyModification.h"
#include "FuelTank.h"
#include "PowerGridInfo.h"
#include "AssemblyStation.generated.h"

class UBoxComponent;
class UGenericStockpileComponent;
class UModificationSlotComponent;
class UBuildSocketComponent;
class UFacilityLightComponent;
class USceneComponent;
class ABuildSite;

UCLASS(Blueprintable)
class WAR_API AAssemblyStation : public ATeamStructure, public IPowerGridNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UModificationSlotComponent* UpgradeSlotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PowerSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFacilityLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* GarageFootprintComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssemblyItem> AssemblyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelQuantity FuelCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortModificationType, FAssemblyModification> Modifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelTank> FuelTanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PowerGridInfo, meta=(AllowPrivateAccess=true))
    FPowerGridInfo PowerGridInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString ProducerOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasParkingSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowsTierUpgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsExtraLargeShippables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpgradeCostMultiplier;
    
    UPROPERTY(EditAnywhere, Replicated)
    TWeakObjectPtr<ABuildSite> BuildSite;
    
public:
    AAssemblyStation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerGridInfo();
    
    
    // Fix for true pure virtual functions not being implemented
};

