#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FacilityRefineryAnimInstance.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, NonTransient)
class WAR_API UFacilityRefineryAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AnimatedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimatedSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UVOffsetSpeed;
    
    UFacilityRefineryAnimInstance();
};

