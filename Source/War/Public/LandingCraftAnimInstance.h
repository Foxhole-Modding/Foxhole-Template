#pragma once
#include "CoreMinimal.h"
#include "SimVehicleGunnerSupportAnimInstance.h"
#include "LandingCraftAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API ULandingCraftAnimInstance : public USimVehicleGunnerSupportAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IsBackHatchOpen;
    
    ULandingCraftAnimInstance();
};

