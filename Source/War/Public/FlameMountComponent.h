#pragma once
#include "CoreMinimal.h"
#include "HitScanMountComponent.h"
#include "FlameImpactFXInfo.h"
#include "FlameMountComponent.generated.h"

class UParticleSystemComponent;
class UParticleSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UFlameMountComponent : public UHitScanMountComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FlameStreamFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FlameBurstFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* AttachedFlameComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* ImpactBurstFXComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelReloadAmount;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlameSpeedPredictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlameStreamFXParam, meta=(AllowPrivateAccess=true))
    float FlameStreamFXParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlameImpactFXInfo, meta=(AllowPrivateAccess=true))
    FFlameImpactFXInfo FlameImpactFXInfo;
    
public:
    UFlameMountComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FlameStreamFXParam();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FlameImpactFXInfo();
    
};

