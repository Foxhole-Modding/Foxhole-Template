#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EGateState.h"
#include "GateAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UGateAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGateState GateState;
    
    UGateAnimInstance();
};

