#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "FortStaticArtilleryAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UFortStaticArtilleryAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalAngle;
    
public:
    UFortStaticArtilleryAnimInstance();
};

