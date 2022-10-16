#pragma once
#include "CoreMinimal.h"
#include "SimVehicleAnimInstance.h"
#include "SpiderMechAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API USpiderMechAnimInstance : public USimVehicleAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float GunnerYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunnerYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AltGunnerPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsHatchOpen;
    
public:
    USpiderMechAnimInstance();
};

