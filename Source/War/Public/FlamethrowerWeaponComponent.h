#pragma once
#include "CoreMinimal.h"
#include "HeavyMachineGunItemComponent.h"
#include "FlameImpactFXInfo.h"
#include "UObject/NoExportTypes.h"
#include "FlamethrowerWeaponComponent.generated.h"

class AAmmoPickup;
class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UFlamethrowerWeaponComponent : public UHeavyMachineGunItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FlameStreamFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FlameBurstFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FlameIdleFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AttachedFlameComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ImpactBurstFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* IdleFlameFXComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameSpeedPredictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlameStreamFXParam, meta=(AllowPrivateAccess=true))
    float FlameStreamFXParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlameImpactFXInfo, meta=(AllowPrivateAccess=true))
    FFlameImpactFXInfo FlameImpactFXInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAmmoPickup* CachedAmmoPickupCDO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IdleFlameFXOffset;
    
public:
    UFlamethrowerWeaponComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FlameStreamFXParam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FlameImpactFXInfo();
    
};

