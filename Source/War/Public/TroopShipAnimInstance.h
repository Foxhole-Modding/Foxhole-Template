#pragma once
#include "CoreMinimal.h"
#include "SimVehicleAnimInstance.h"
#include "TroopShipAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UTroopShipAnimInstance : public USimVehicleAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RampAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeploying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeployed;
    
public:
    UTroopShipAnimInstance();
};

