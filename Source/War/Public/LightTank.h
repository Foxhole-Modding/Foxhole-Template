#pragma once
#include "CoreMinimal.h"
#include "TankBase.h"
#include "UObject/NoExportTypes.h"
#include "LightTank.generated.h"

UCLASS(Blueprintable)
class WAR_API ALightTank : public ATankBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GunnerYawAndPitch, meta=(AllowPrivateAccess=true))
    FVector2D GunnerYawAndPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StashedAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FName StashedAmmoType;
    
public:
    ALightTank();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_GunnerYawAndPitch();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsShooting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGunYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGunPitch() const;
    
};

