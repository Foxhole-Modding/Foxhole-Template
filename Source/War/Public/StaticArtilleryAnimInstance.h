#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "StaticArtilleryAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UStaticArtilleryAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShooting;
    
public:
    UStaticArtilleryAnimInstance();
};

