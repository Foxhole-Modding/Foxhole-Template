#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "SurfaceMovementData.h"
#include "GlobalMovementModifiersInfo.generated.h"

UCLASS(Blueprintable)
class WAR_API AGlobalMovementModifiersInfo : public AInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurfaceMovementData> VehicleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSurfaceMovementData> MotorboatData;
    
    AGlobalMovementModifiersInfo();
};

