#pragma once
#include "CoreMinimal.h"
#include "PowerNode.h"
#include "GunTurret.h"
#include "PowerInfo.h"
#include "FortTurretAT.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AFortTurretAT : public AGunTurret, public IPowerNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPowerInfo PowerInfo;
    
public:
    AFortTurretAT();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

