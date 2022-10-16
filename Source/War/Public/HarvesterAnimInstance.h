#pragma once
#include "CoreMinimal.h"
#include "SimVehicleAnimInstance.h"
#include "HarvesterAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UHarvesterAnimInstance : public USimVehicleAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGrinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSplitting;
    
public:
    UHarvesterAnimInstance();
};

