#pragma once
#include "CoreMinimal.h"
#include "InfantryRailVehicleAnimInstance.h"
#include "LRArtilleryCarAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API ULRArtilleryCarAnimInstance : public UInfantryRailVehicleAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIsCranking;
    
    ULRArtilleryCarAnimInstance();
};

