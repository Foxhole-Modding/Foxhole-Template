#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "DeployedTripodAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UDeployedTripodAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDeployed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativeYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RelativePitch;
    
    UDeployedTripodAnimInstance();
};

