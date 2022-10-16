#pragma once
#include "CoreMinimal.h"
#include "CharacterConditions.h"
#include "IdleAnimation.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FIdleAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ActivityMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterConditions Conditions;
    
    WAR_API FIdleAnimation();
};

