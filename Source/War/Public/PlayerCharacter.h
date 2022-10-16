#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Vector2D_NetQuantize.h"
#include "SimCharacter.h"
#include "UITargetingInfo.h"
#include "UObject/NoExportTypes.h"
#include "CharacterInvokeInfo.h"
#include "ActivityStateChange.h"
#include "ECharacterActivityState.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EOpenVehicleInventoryResponse.h"
#include "ESimCharacterStance.h"
#include "PlayerCharacter.generated.h"

class UParticleSystemComponent;
class UPostProcessComponent;
class UParticleSystem;
class UPlayerCameraRigComponent;
class UCameraComponent;
class UStaticMeshComponent;
class UPlayerLOSRasterComponent;
class UCameraShake;
class USceneComponent;
class ARailwayTrack;
class ASimVehicle;
class AStructure;
class ARailVehicle;

UCLASS(Blueprintable)
class WAR_API APlayerCharacter : public ASimCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimingMaxSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ControllerAimScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseAimScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoAimYawScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisablePlayerFogOfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlwaysVisibleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AimRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScopeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OfflineFxTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUITargetingInfo LastUITargetingInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector2D_NetQuantize YawPitchPacked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerCameraRigComponent* CameraRigComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCameraComponent* TopDownCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ScopePS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* LOSPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPlayerLOSRasterComponent* LOSRasterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> SprintCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GrenadeAimMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Grip_Standing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Grip_Crouched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Grip_Prone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bIsInScopeMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime OfflineExpiryTime;
    
public:
    APlayerCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdateAimYawAndPitch(FVector2D_NetQuantize InYawPitchPacked);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleRailSwitch(ARailwayTrack* RailwayTrack, int32 PathSocketId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSyncLastWeaponInvoke(const FCharacterInvokeInfo& ClientWeaponInvoke);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSwitchSeats(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, int32 NewSeatIndex);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetIsInScopeMode(bool InIsInScopeMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlayEmote(const ECharacterActivityState EmoteActivityState);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOpenVehicleInventory(ASimVehicle* Vehicle);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnUseFromVehicle(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMountStructure(AStructure* Structure, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLinkRailVehicles(ARailVehicle* VehicleA, ARailVehicle* VehicleB);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerExitVehicle(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnterVehicle(ASimVehicle* Vehicle, FActivityStateChange ActivityStateChange, const int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientVehicleSeatSwitched(bool bIsDriver);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetUnmountPosition(FVector Position, FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetFlyMode(const bool bInIsFlyMode, const float FlyHeight, const float FlySpeed);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOpenVehicleResponse(ASimVehicle* Vehicle, const EOpenVehicleInventoryResponse OpenVehicleInventoryResponse);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientLockStance(ESimCharacterStance Stance, bool bLocked);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCannonLaunch(const FVector2D_NetQuantize LaunchVelocity);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPUpdateMaterialParameters(const FVector& Position);
    
};

