#pragma once
#include "CoreMinimal.h"
#include "SimVehicleAnimInstance.h"
#include "ConstructionVehicleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UConstructionVehicleAnimInstance : public USimVehicleAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftTreadPlayrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightTreadPlayrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CabinYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDoingWork;
    
public:
    UConstructionVehicleAnimInstance();
};

