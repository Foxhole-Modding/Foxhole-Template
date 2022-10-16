#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AssemblyStationAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UAssemblyStationAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UAssemblyStationAnimInstance();
};

