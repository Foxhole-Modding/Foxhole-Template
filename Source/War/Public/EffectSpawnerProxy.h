#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EffectSpawnerProxy.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS(Blueprintable)
class WAR_API AEffectSpawnerProxy : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DestroyedVFX, meta=(AllowPrivateAccess=true))
    UParticleSystem* DestroyedVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DestroyedSoundCue, meta=(AllowPrivateAccess=true))
    USoundCue* DestroyedSoundCue;
    
public:
    AEffectSpawnerProxy();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DestroyedVFX();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DestroyedSoundCue();
    
};

