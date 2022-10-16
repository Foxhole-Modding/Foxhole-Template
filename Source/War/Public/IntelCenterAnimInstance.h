#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "IntelCenterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UIntelCenterAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
public:
    UIntelCenterAnimInstance();
};

