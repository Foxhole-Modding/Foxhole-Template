#pragma once
#include "CoreMinimal.h"
#include "SimVehicleAnimInstance.h"
#include "BicycleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UBicycleAnimInstance : public USimVehicleAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInUse;
    
public:
    UBicycleAnimInstance();
};

