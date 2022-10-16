#pragma once
#include "CoreMinimal.h"
#include "SimVehicleAnimInstance.h"
#include "BargeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UBargeAnimInstance : public USimVehicleAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBargeOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RampAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RampExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropellerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PropellerAnimIndex;
    
public:
    UBargeAnimInstance();
};

