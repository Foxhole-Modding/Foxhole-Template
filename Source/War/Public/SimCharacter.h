#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WarCharacter.h"
#include "ActivityStateInfo.h"
#include "CharacterInvokableInterface.h"
#include "DamageableActor.h"
#include "ActivityStateDebugTrace.h"
#include "MapIntelligenceInterface.h"
#include "ECharacterActivityState.h"
#include "EmoteActivityOptions.h"
#include "Engine/EngineTypes.h"
#include "SurfaceMovementData.h"
#include "EZombieType.h"
#include "ItemInstance.h"
#include "ESimCharacterStance.h"
#include "EDamageType.h"
#include "ActivityStateChange.h"
#include "EFortModificationType.h"
#include "UObject/NoExportTypes.h"
#include "HitNotify.h"
#include "SimCharacter.generated.h"

class USoundCue;
class ASimVehicle;
class UModificationSlotComponent;
class UMountComponent;
class AStructure;
class USkeletalMeshComponent;
class USceneComponent;
class AController;
class UStaticMeshComponent;
class USphereComponent;
class UItemHolderComponent;
class UEquipmentHolderComponent;
class UParticleSystemComponent;
class UAudioComponent;
class AItemPickup;
class AActor;
class UDamageType;
class AImpactEffect;
class UParticleSystem;
class ASimCharacter;
class ALadder;

UCLASS(Blueprintable)
class WAR_API ASimCharacter : public AWarCharacter, public ICharacterInvokableInterface, public IDamageableActor, public IMapIntelligenceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StanceYawModifiers[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGiveStarterKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintingMaxSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SprintingStaminaDrainRateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SprintingStaminaDrainRateModifierCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProneEyeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchedTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFallSpeedForDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FatalFallSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClimbForwardDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClimbCosAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVaultHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVaultVerticalClearencePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVaultDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClimbHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClimbOpenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClimbOntoOpenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinShortWallStepOpenDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClamberStandOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, ReplicatedUsing=OnRep_MountComponent, meta=(AllowPrivateAccess=true))
    UMountComponent* MountComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentOccupiedStructure, meta=(AllowPrivateAccess=true))
    AStructure* CurrentOccupiedStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentVehicle, meta=(AllowPrivateAccess=true))
    ASimVehicle* CurrentVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimVehicle* CurrentMountedVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FootStepCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthThresholdForHurtMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxActivityLatencyCompensation;
    
    UPROPERTY(EditAnywhere)
    FActivityStateInfo ActivityStateInfos[64];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterActivityState, FEmoteActivityOptions> EmoteActivityOptionsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AllowedDeviationOfShootingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InVehicleAllowedDeviationOfShootingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponFiringConeAbilityModifierPct;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_TeamIdNotify)
    uint8 TeamId;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_VisualCustomizationMaskNotify)
    uint8 VisualCustomizationMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_IsWearingGasMask, meta=(AllowPrivateAccess=true))
    uint8 bIsWearingGasMask: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreStanceInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesDynamicMaterials: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsEncumbered: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> CurrentSurfaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurfaceMovementData> SurfaceMovementModifiers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Hands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Legs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Helmet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EquippedItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* GasMaskMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* AccessoryMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Muzzle_Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Muzzle_Crouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Muzzle_Prone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GroundEquippedItemMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* ItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USphereComponent* SuppressionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> ItemHolderItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEquipmentHolderComponent* EquipmentItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> EquipmentItemHolderItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SwimmingPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* EnterWaterPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* SwimmingSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* EnterWaterSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterStance, meta=(AllowPrivateAccess=true))
    ESimCharacterStance CharacterStance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterActivityState, meta=(AllowPrivateAccess=true))
    ECharacterActivityState CharacterActivityStateInternal;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    float Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Muddyness;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_Muddyness)
    uint8 ReplicatedMuddyness;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LastMovementBase;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeMinDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeleeMaxDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> MeleeDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> MeleeImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* MeleeAttackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrowningBuoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingStaminaDrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimmingStaminaDrainDepthCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClimbingDepthCutoff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollInWaterLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RagdollOutOfWaterLinearDamping;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityMovementDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityDecayMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityYawDecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StabilityYawDecayTime;
    
    UPROPERTY(EditAnywhere)
    float StabilityGainRates[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float HealTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BleedingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedDamagePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BleedMinDamageReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaggerMinDamageReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BleedingEffectTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* SpawnedBleedingEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBleeding, meta=(AllowPrivateAccess=true))
    uint8 bIsBleeding: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ZombieType, meta=(AllowPrivateAccess=true))
    EZombieType ZombieType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WoundedTimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZombieMeleeReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ZombieMeleeImpactEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ZombieDeathSound;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZombieHitRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZombieHitHalfHeight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimCharacter* CarryingPlayer;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AController> LastBurningHitInstigator;
    
public:
    ASimCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopFiring();
    
    UFUNCTION(BlueprintCallable)
    void StartFiring();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SlowTick();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUseItem(const int8 Index, UItemHolderComponent* InHolder);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTakePickup(AItemPickup* ItemPickup);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSimulateMeleeAttack(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetSprinting(bool bIsSprinting);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetIsProne(bool bIsProne);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReloadFromWater(int32 AmmoIx, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReload(int32 AmmoIx, UItemHolderComponent* InHolder, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerModifyStructure(FActivityStateChange ActivityStateChange, UModificationSlotComponent* Slot, const EFortModificationType Type, int32 CurrentModificationMask);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGiveUpFromWoundedState();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDropLargeItem();
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerDropItem(const int8 Index);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClimbLadder(ALadder* Ladder, bool bEntering, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClimb(FVector2D InputDirection, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerChangeItemEquipState(const int8 Index, const bool bEquip, const FActivityStateChange& ActivityStateChange);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCarryWounded(ASimCharacter* WoundedCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ZombieType();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_VisualCustomizationMaskNotify();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamIdNotify();
    
protected:
    UFUNCTION()
    void OnRep_Muddyness(const uint8 PreviousMuddyness);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_MountComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsWearingGasMask();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBleeding();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentVehicle(ASimVehicle* PreviousVehicle);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentOccupiedStructure();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterStance();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterActivityState();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSpawnMeleeHitEffects(FHitNotify SimulatedHitNotify);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnUniformMitigatedDamage(EDamageType DamageType);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastApplyNonFatalHit(const float InStagger);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTraceActivity(FActivityStateDebugTrace NewTrace);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncStability(const float NewStability);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSyncNormalizedStamina(float InNormalizedStamina);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientSyncActivityStateSequence(uint8 CurrentSequenceNumber, int8 HeldItemIndex);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSuppress(const float SuppressAmount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetItemHolderItems(const TArray<FItemInstance>& InItemHolderItems);
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientSetGainingHeatFromHits(bool bIsGaining);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientInterruptActivityState(uint8 SequenceNumber);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndWoundedState();
    
private:
    UFUNCTION(Client, Reliable)
    void ClientCorrectActivityState(uint8 LastSuccessfulSequenceNumber, int8 HeldItemIndex, ECharacterActivityState NewState);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientCarryWoundedSetupMovement(ASimCharacter* WoundedCharacter, bool bBeganCarrying);
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientBeginWoundedState(const float WoundedTimeSec, uint8 CurrentSequenceNumber);
    
private:
    UFUNCTION(Client, Reliable)
    void ClientAckActivityState(uint8 SequenceNumber);
    
    UFUNCTION(BlueprintCallable)
    void CheckForCover();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateHeatVisuals(bool bState);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPSetTeamVisuals(const int32 VisualTeamId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPCinematicDeath();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void AllApplyStagger(float StaggerAmount);
    
    
    // Fix for true pure virtual functions not being implemented
};

