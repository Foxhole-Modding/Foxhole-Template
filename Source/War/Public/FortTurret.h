#pragma once
#include "CoreMinimal.h"
#include "FoxholeTurret.h"
#include "PowerNode.h"
#include "PowerInfo.h"
#include "FortTurret.generated.h"

class UBoxComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AFortTurret : public AFoxholeTurret, public IPowerNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPowerInfo PowerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* OccupiableTriggerVolume;
    
public:
    AFortTurret();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

