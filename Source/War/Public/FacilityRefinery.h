#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "PowerGridNode.h"
#include "EFortModificationType.h"
#include "MultiConversionInfo.h"
#include "FacilityModification.h"
#include "FuelTank.h"
#include "EFacilityRefineryState.h"
#include "PowerGridInfo.h"
#include "FuelQuantity.h"
#include "FacilityRefinery.generated.h"

class UGenericStockpileComponent;
class UModificationSlotComponent;
class UBuildSocketComponent;
class UFacilityLightComponent;

UCLASS(Blueprintable)
class WAR_API AFacilityRefinery : public ATeamStructure, public IPowerGridNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UModificationSlotComponent* UpgradeSlotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PowerSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UFacilityLightComponent* LightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMultiConversionInfo> ConversionEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortModificationType, FFacilityModification> Modifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredResourceFieldCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelTank> FuelTanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_PowerGridInfo, meta=(AllowPrivateAccess=true))
    FPowerGridInfo PowerGridInfo;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ConversionInfoIndex)
    int8 ConversionInfoIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EFacilityRefineryState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasConsumedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SavedProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelQuantity> FuelOutputBuffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ItemInputBuffer;
    
public:
    AFacilityRefinery();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PowerGridInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConversionInfoIndex();
    
    
    // Fix for true pure virtual functions not being implemented
};

