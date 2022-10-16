#pragma once
#include "CoreMinimal.h"
#include "MovementModifierForStanceData.h"
#include "MovementModifierData.generated.h"

USTRUCT(BlueprintType)
struct FMovementModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovementModifierForStanceData Stances[4];
    
    WAR_API FMovementModifierData();
};

