#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TrackSwitchAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UTrackSwitchAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UTrackSwitchAnimInstance();
};

