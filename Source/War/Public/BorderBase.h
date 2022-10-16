#pragma once
#include "CoreMinimal.h"
#include "ForwardBase.h"
#include "BorderBaseInfo.h"
#include "BorderBase.generated.h"

class UParticleSystemComponent;
class USoundCue;

UCLASS(Blueprintable)
class WAR_API ABorderBase : public AForwardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* OnSpawnedPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OnSpawnedSFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsUsable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FBorderBaseInfo Info;
    
public:
    ABorderBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastOnSpawned();
    
};

