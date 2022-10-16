#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EmplacedFoundationAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UEmplacedFoundationAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UEmplacedFoundationAnimInstance();
};

