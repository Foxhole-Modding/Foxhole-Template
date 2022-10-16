#pragma once
#include "CoreMinimal.h"
#include "MultiAmmoStructureMountComponent.h"
#include "ActivityStateChange.h"
#include "UObject/NoExportTypes.h"
#include "EmplacementMortarMountComponent.generated.h"

class USoundCue;
class AExplosiveAmmoPickup;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UEmplacementMortarMountComponent : public UMultiAmmoStructureMountComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScopeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingThresholdPrecisionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFlashPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelegraphDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MortarFlightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ReloadSoundCue;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageDebug;
    
public:
    UEmplacementMortarMountComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartInvoke(FActivityStateChange ActivityStateChange, float Distance);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFiringFX(const AExplosiveAmmoPickup* AmmoPickupCDO);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastDamageDebug(FVector TraceStart, FVector TraceEnd, FVector Location, const AExplosiveAmmoPickup* AmmoPickupCDO);
    
};

