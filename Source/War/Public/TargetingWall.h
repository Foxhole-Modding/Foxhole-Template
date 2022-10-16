#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "TargetingWall.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class WAR_API ATargetingWall : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageEvents, meta=(AllowPrivateAccess=true))
    TArray<FPointDamageEvent> DamageEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ResetTrigger;
    
public:
    ATargetingWall();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageEvents();
    
};

