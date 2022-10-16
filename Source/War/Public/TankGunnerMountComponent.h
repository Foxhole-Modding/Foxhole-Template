#pragma once
#include "CoreMinimal.h"
#include "MultiAmmoVehicleMountComponent.h"
#include "ActivityStateChange.h"
#include "CharacterInvokeInfo.h"
#include "UObject/NoExportTypes.h"
#include "TankGunnerMountComponent.generated.h"

class USoundCue;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTankGunnerMountComponent : public UMultiAmmoVehicleMountComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ReloadSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShotSoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFlashPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerDriverFiringState;
    
public:
    UTankGunnerMountComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInvoke(const FCharacterInvokeInfo& InvokeInfo, FActivityStateChange ActivityStateChange);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFiringFX();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayDebugTrace(FVector TraceStart, FVector TraceEnd, FVector HitLocation, float HitAngle, FVector HitNormal, float DamageInnerRadius, float DamageOuterRadius);
    
};

