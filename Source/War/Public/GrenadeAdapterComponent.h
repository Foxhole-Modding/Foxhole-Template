#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HitScanWeaponComponent.h"
#include "ActivityStateInfo.h"
#include "CharacterInvokeInfo.h"
#include "ActivityStateChange.h"
#include "MultiAmmo.h"
#include "GrenadeAdapterComponent.generated.h"

class USkeletalMesh;
class AWarProjectile;
class USoundCue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UGrenadeAdapterComponent : public UHitScanWeaponComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* GrenadeAdapterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActivityStateInfo GrenadeReloadActivityStateInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AWarProjectile>> GrenadeClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* GrenadeFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BayonetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* AttachAccessorySound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* BayonetAttackSound;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GrenadeMultiAmmo, meta=(AllowPrivateAccess=true))
    FMultiAmmo GrenadeMultiAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGrenadeMode, meta=(AllowPrivateAccess=true))
    bool bIsGrenadeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBayonetMode, meta=(AllowPrivateAccess=true))
    bool bIsBayonetMode;
    
public:
    UGrenadeAdapterComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleFireMode(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetDesiredAmmoType(FName InDesiredAmmoType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReleaseGrenade(const FCharacterInvokeInfo& WeaponInvokeInfo, FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerBayonetAttack(FActivityStateChange ActivityStateChange);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsGrenadeMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBayonetMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GrenadeMultiAmmo();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFX();
    
};

