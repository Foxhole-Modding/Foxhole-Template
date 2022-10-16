#pragma once
#include "CoreMinimal.h"
#include "HitScanWeaponComponent.h"
#include "HitNotify.h"
#include "ShotgunComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UShotgunComponent : public UHitScanWeaponComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SimulatedHitNotifies, meta=(AllowPrivateAccess=true))
    TArray<FHitNotify> SimulatedHitNotifies;
    
public:
    UShotgunComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_SimulatedHitNotifies();
    
};

