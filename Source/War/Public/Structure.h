#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EArmourType.h"
#include "MapIntelligenceInterface.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Actor.h"
#include "PersistentActor.h"
#include "DamageableActor.h"
#include "EStructureProfileType.h"
#include "EMapIntelligenceType.h"
#include "UObject/NoExportTypes.h"
#include "GenericActor.h"
#include "ItemInstance.h"
#include "ETechID.h"
#include "ETechComponentID.h"
#include "EStructureNetRelevancySize.h"
#include "EDynamicTier.h"
#include "EMapIconType.h"
#include "ESimScreen.h"
#include "ClaimStatus.h"
#include "EFireIntensity.h"
#include "Structure.generated.h"

class UInfrastructureComponent;
class UStealthComponent;
class UParticleSystem;
class UArrowComponent;
class UBoxComponent;
class USoundCue;
class UGarrisonComponent;
class UItemHolderComponent;
class UMeshVisibilityComponent;
class UMountComponent;
class AStructureIsland;
class UMultiplexedStaticMeshComponent;
class UMultiplexedSkeletalMeshComponent;
class AWarCharacter;
class UTemperatureModifierBoxComponent;
class AFlameActor;
class UParticleSystemComponent;
class UTechTreeComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AStructure : public AActor, public IGenericTeamAgentInterface, public IPersistentActor, public IMapIntelligenceInterface, public IDamageableActor, public IGenericActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ConversionCodeNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStructureProfileType ProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmourType ArmourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* UseAreaBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* KillVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyedFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DestroyedSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* ItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> ItemHolderItems;
    
    UPROPERTY(EditAnywhere)
    ETechID TechID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETechComponentID> TechComponentIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGarrisonComponent* GarrisonComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UInfrastructureComponent* InfrastructureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMeshVisibilityComponent* MeshVisibilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMountComponent> MountComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_DynamicTier, meta=(AllowPrivateAccess=true))
    EDynamicTier DynamicTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIconType MapIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UpgradeStructureCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DropLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateDropLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsVaultable;
    
    UPROPERTY(EditAnywhere)
    ESimScreen ScreenToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float DecayRemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIntelligenceType MapIntelligenceType;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 StructureFlags;
    
    UPROPERTY(EditAnywhere)
    EStructureNetRelevancySize StructureNetRelevancySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStockpilable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReserveStockpiled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsBuiltNearBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIgnoresRapidDecay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_IsPrototype, meta=(AllowPrivateAccess=true))
    bool bIsPrototype;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FString BuilderPlayerOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FString BuilderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FClaimStatus ClaimStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAddLandscapeHolesOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRemoveLandscapeHolesOnDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasLandscapeHoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasRemovedLandscapeHoles;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AStructureIsland> Island;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UMultiplexedStaticMeshComponent*> MultiplexedStaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UMultiplexedSkeletalMeshComponent*> MultiplexedSkeletalMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStealthComponent* StealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StructureFlameCountFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecaySupplyDrain;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireIntensity, meta=(AllowPrivateAccess=true))
    EFireIntensity FireIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float PreMitigationFireDamagePerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTemperatureModifierBoxComponent* BurningHeatArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFlameActor*> FlameActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FireSpreadFX;
    
public:
    AStructure();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Use(AWarCharacter* UsingPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateFireSpreadWindInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPrototype();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireIntensity(EFireIntensity Previous);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DynamicTier();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void MulticastOnVehicleDrivingOverDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCollidingWithDuplicate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTechTreeComponent* GetTechTreeComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnVehicleDrivingOverDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnFireIntensityReduced(int32 OldIntensity, int32 NewIntensity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnFireIntensityIncreased(int32 OldIntensity, int32 NewIntensity);
    
    
    // Fix for true pure virtual functions not being implemented
};

