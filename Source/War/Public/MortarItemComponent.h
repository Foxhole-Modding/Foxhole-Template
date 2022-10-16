#pragma once
#include "CoreMinimal.h"
#include "MultiAmmoItemComponent.h"
#include "UObject/NoExportTypes.h"
#include "ActivityStateChange.h"
#include "MortarItemComponent.generated.h"

class USkeletalMesh;
class AExplosiveAmmoPickup;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UMortarItemComponent : public UMultiAmmoItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleFlashPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TelegraphDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MortarFlightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
public:
    UMortarItemComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFire(float Distance, FActivityStateChange ActivityStateChange);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFiringFX(const AExplosiveAmmoPickup* AmmoPickup);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientDrawDamageDebug(FVector HitLocation, float Radius);
    
};

