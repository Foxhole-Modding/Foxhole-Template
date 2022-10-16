#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TunnelNode.h"
#include "GunnerSupport.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EmplacementHouse.generated.h"

class USkeletalMeshComponent;
class USceneComponent;
class UOccupiableComponent;
class ALadder;

UCLASS(Blueprintable)
class WAR_API AEmplacementHouse : public ATunnelNode, public IGunnerSupport {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EmplacementGunMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* EmplacementGunMuzzleLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOccupiableComponent* OccupiableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALadder> LadderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToStarvation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationHysteresisTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StashedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName StashedAmmoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector2D GunnerYawAndPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALadder* Ladder;
    
public:
    AEmplacementHouse();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
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

