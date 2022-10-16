#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "CoalitionAssignable.h"
#include "PowerNode.h"
#include "GunnerSupport.h"
#include "LongRangeArtillerySupport.h"
#include "PowerInfo.h"
#include "UObject/NoExportTypes.h"
#include "ConcreteSettler.h"
#include "UObject/NoExportTypes.h"
#include "LongRangeArtillery.generated.h"

class UBoxComponent;
class USkeletalMeshComponent;
class UOccupiableComponent;
class UAudioComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class WAR_API ALongRangeArtillery : public ATeamStructure, public ICoalitionAssignable, public IGunnerSupport, public IPowerNode, public ILongRangeArtillerySupport {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BaseMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOccupiableComponent* OccupiableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* OccupiableTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* RotationSFXLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* FireShellParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* EjectShellParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplosionDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredPowerForFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredPowerForRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPowerInfo PowerInfo;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 RequiredSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_GunnerYawAndPitch, meta=(AllowPrivateAccess=true))
    FVector2D GunnerYawAndPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    float Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StashedAmmo;
    
public:
    ALongRangeArtillery();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GunnerYawAndPitch(const FVector2D PreviousGunnerYawAndPitch);
    
    
    // Fix for true pure virtual functions not being implemented
public:
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

