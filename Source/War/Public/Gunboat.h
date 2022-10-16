#pragma once
#include "CoreMinimal.h"
#include "SimVehicle.h"
#include "GunnerSupport.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Gunboat.generated.h"

class UParticleSystemComponent;
class USceneComponent;
class UBoxComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API AGunboat : public ASimVehicle, public IGunnerSupport {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* MachineGunMuzzleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* ArtilleryMuzzleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* WorkVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontLeftWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontRightWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackLeftWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* BackRightWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FrontWakeWaterEmitter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* WakeWaterEmitter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ArtilleryGunYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ArtilleryGunPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MachineGunYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MachineGunPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StashedArtilleryAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StashedMachineGunAmmo;
    
public:
    AGunboat();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetIsArtilleryFiring(bool IsBowFiring);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMachineGunFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArtilleryRotating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArtilleryFiring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMachineGunYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMachineGunPitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArtilleryYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArtilleryPitch() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UpdateGunnerYawAndPitch(int32 GunnerIndex, FVector2D YawAndPitch) override PURE_VIRTUAL(UpdateGunnerYawAndPitch,);
    
    UFUNCTION(BlueprintCallable)
    void SetStashedAmmo(int32 GunnerIndex, int32 AmmoAmount, FName AmmoName) override PURE_VIRTUAL(SetStashedAmmo,);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFiring(int32 GunnerIndex, bool IsFiring) override PURE_VIRTUAL(SetIsFiring,);
    
    UFUNCTION(BlueprintCallable)
    void SetGunnerWorking(int32 GunnerIndex, bool IsWorking) override PURE_VIRTUAL(SetGunnerWorking,);
    
    UFUNCTION(BlueprintCallable)
    bool IsGunnerWorking(int32 GunnerIndex) const override PURE_VIRTUAL(IsGunnerWorking, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsFiring(int32 GunnerIndex) const override PURE_VIRTUAL(IsFiring, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsDeployed(int32 GunnerIndex, bool bTestFullDeploy) const override PURE_VIRTUAL(IsDeployed, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetTrackingSpeedModifier(int32 GunnerIndex) const override PURE_VIRTUAL(GetTrackingSpeedModifier, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    FName GetStashedAmmoType(int32 GunnerIndex) const override PURE_VIRTUAL(GetStashedAmmoType, return NAME_None;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStashedAmmo(int32 GunnerIndex) const override PURE_VIRTUAL(GetStashedAmmo, return 0;);
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMeshComponent(int32 GunnerIndex) const override PURE_VIRTUAL(GetSkeletalMeshComponent, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumMuzzleSockets(int32 GunnerIndex) const override PURE_VIRTUAL(GetNumMuzzleSockets, return 0;);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetMuzzleTransformFromIndex(int32 GunnerIndex, int32 MuzzleIndex) const override PURE_VIRTUAL(GetMuzzleTransformFromIndex, return FTransform{};);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetGunnerYawAndPitch(int32 GunnerIndex) const override PURE_VIRTUAL(GetGunnerYawAndPitch, return FVector2D{};);
    
    UFUNCTION(BlueprintCallable)
    bool CanRotate(int32 GunnerIndex) const override PURE_VIRTUAL(CanRotate, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanFire(int32 GunnerIndex) const override PURE_VIRTUAL(CanFire, return false;);
    
};

