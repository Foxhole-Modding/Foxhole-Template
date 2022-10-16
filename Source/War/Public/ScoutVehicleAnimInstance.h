#pragma once
#include "CoreMinimal.h"
#include "SimVehicleAnimInstance.h"
#include "ScoutVehicleAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UScoutVehicleAnimInstance : public USimVehicleAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTransmitting;
    
public:
    UScoutVehicleAnimInstance();
};

