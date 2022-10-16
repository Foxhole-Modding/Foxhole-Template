#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DrawbridgeAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UDrawbridgeAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwitchOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenProgress;
    
    UDrawbridgeAnimInstance();
};

