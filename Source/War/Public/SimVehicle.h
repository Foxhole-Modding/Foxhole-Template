#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WarCharacter.h"
#include "PersistentActor.h"
#include "EArmourType.h"
#include "UObject/NoExportTypes.h"
#include "EVehicleProfileType.h"
#include "EFactionId.h"
#include "MapIntelligenceInterface.h"
#include "CoalitionAssignable.h"
#include "MuzzleInfo.h"
#include "DamageableActor.h"
#include "GenericActor.h"
#include "UObject/NoExportTypes.h"
#include "ETechID.h"
#include "ShippableInfo.h"
#include "EVehicleBuildType.h"
#include "TreadActorInfo.h"
#include "EVehicleMovementProfileType.h"
#include "ArmourDirectionBoneNamesList.h"
#include "EServerAnimTickMode.h"
#include "FuelTank.h"
#include "HornData.h"
#include "VehicleMapIntelligenceProvider.h"
#include "ItemInstance.h"
#include "TreadData.h"
#include "ETechTreeTier.h"
#include "UObject/NoExportTypes.h"
#include "VehicleDeploymentLogic.h"
#include "Engine/EngineTypes.h"
#include "ETankArmourEffectType.h"
#include "SimVehicle.generated.h"

class UPlayerCameraRigComponent;
class UPhysicalMaterial;
class AActor;
class UVehicleSeatComponent;
class UTexture;
class UStaticMeshComponent;
class AVehicleBuildSite;
class ASimCharacter;
class UParticleSystemComponent;
class UCurveFloat;
class UParticleSystem;
class USoundCue;
class UAudioComponent;
class UAFKTimeoutComponent;
class USceneComponent;
class UBoxComponent;
class UItemHolderComponent;
class UPrimitiveComponent;
class APlayerCharacter;

UCLASS(Blueprintable)
class WAR_API ASimVehicle : public AWarCharacter, public IPersistentActor, public IMapIntelligenceInterface, public ICoalitionAssignable, public IDamageableActor, public IGenericActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BuildOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BuildRotation;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UPhysicalMaterial> RearTraceMaterial;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UPhysicalMaterial> FrontTraceMaterial;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> FrontTraceActor;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AActor> RearTraceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInterpolatePitch: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChassisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Icon;
    
    UPROPERTY(EditAnywhere)
    ETechID TechID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShippableInfo ShippableInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVehicleBuildSite> BuildSiteClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleBuildType VehicleBuildType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleProfileType VehicleProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVehicleMovementProfileType VehicleMovementProfileType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArmourType ArmourType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDriveOverTrenches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FArmourDirectionBoneNamesList> ArmourDirectionBoneNamesList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Health, meta=(AllowPrivateAccess=true))
    int32 Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_TankArmour, meta=(AllowPrivateAccess=true))
    int32 TankArmour;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Subsystems)
    uint8 Subsystems;
    
    UPROPERTY(EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ActiveModularMounts)
    uint8 ActiveModularMounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_FuelTank, meta=(AllowPrivateAccess=true))
    FFuelTank FuelTank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLimitInventoryToAmmo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsStockpilable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsReserveStockpiled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsVehicleOn, meta=(AllowPrivateAccess=true))
    uint8 bIsVehicleOn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsVehicleLocked: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsCommanderHatchOpen, meta=(AllowPrivateAccess=true))
    uint8 bIsCommanderHatchOpen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsReservable: 1;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthCuttoffForSwimDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CommanderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DestroyedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MinorDamagePS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MajorDamagePS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyedFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PenetrateFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PenetrateSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PenetrateSmallFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* PenetrateSmallSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeflectFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DeflectSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* DestroyedSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BreakdownSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BoostSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* CharatcerHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EnvironmentHitSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FrozenEnterSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* DriveLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* BackUpSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* LockSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHornData Horn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVehicleMapIntelligenceProvider VehicleMapIntelligenceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerCameraRigComponent* CameraRigComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* FrontAxleCastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* RearAxleCastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* FrontLeftRollCastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* FrontRightRollCastLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* LeftSideTrackLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* RightSideTrackLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* VehicleCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* PassengerArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAFKTimeoutComponent* AFKTimeoutComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UItemHolderComponent* ItemHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_ItemHolderItems, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> ItemHolderItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTreadActorInfo> TreadInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTreadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTreadData Treads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LinearSpeedToTurnSpeedMapCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* LinearSpeedToWaterTurnSpeedMapCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoostGasUsageModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMuzzleInfo> MuzzleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BuildSpawnOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanMoveUnderBridges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EServerAnimTickMode ServerAnimTickMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CoalitionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Tier, meta=(AllowPrivateAccess=true))
    ETechTreeTier Tier;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeInRecoverySaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoPenetratingShotsReduceTankArmour;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UVehicleSeatComponent*> SeatComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString LockingPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString BuilderPlayerOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VehiclesPerCrateBonusQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime LastSavedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsFastAttachedMove;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVehicleDeploymentLogic DeploymentLogic;
    
    ASimVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void VehicleCollisionTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwitchSeats(int32 NewSeatIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartBoost();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnMount(APlayerCharacter* PlayerCharacter);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFire();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDeployGunner();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Tier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TankArmour();
    
    UFUNCTION()
    void OnRep_Subsystems(const uint8 PreviousSubsystems);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemHolderItems();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsVehicleOn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCommanderHatchOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Health();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelTank(const FFuelTank& PreviousFuelTank);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveModularMounts();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayLockFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPassengerExited(int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPassengerEntered(int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnBoostEntered();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastApplyPenetrateHit(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastApplyFatalHit();
    
    UFUNCTION(NetMulticast, Unreliable)
    void MulticastApplyDeflectHit(const FVector& ImpactLocation, const FVector& ImpactNormal, const ETankArmourEffectType TankArmourEffectType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTopHatchOpen() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndActivityState(ASimCharacter* CharacterToInterrupt);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPOnVehicleOn(bool IsOn);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void AllFire();
    
    
    // Fix for true pure virtual functions not being implemented
};

