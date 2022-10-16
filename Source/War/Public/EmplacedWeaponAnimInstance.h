#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EmplacedWeaponAnimInstance.generated.h"

class UAnimNotify;

UCLASS(Blueprintable, NonTransient)
class WAR_API UEmplacedWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCranking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShooting;
    
    UEmplacedWeaponAnimInstance();
    UFUNCTION(BlueprintCallable)
    void OnFiringComplete();
    
    UFUNCTION(BlueprintCallable)
    void AnimNotify_OnFiringComplete(const UAnimNotify* Notify);
    
};

