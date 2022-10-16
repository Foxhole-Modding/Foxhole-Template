#pragma once
#include "CoreMinimal.h"
#include "MovementModifierForStanceData.generated.h"

USTRUCT(BlueprintType)
struct FMovementModifierForStanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkingSpeedScale;
    
    WAR_API FMovementModifierForStanceData();
};

