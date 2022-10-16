#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GunTurretAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UGunTurretAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TrackingAngle;
    
public:
    UGunTurretAnimInstance();
};

