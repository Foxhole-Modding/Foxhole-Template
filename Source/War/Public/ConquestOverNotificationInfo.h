#pragma once
#include "CoreMinimal.h"
#include "ConquestOverNotificationInfo.generated.h"

USTRUCT(BlueprintType)
struct FConquestOverNotificationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 ConquestWinner;
    
    UPROPERTY(EditAnywhere)
    int8 NumColonialAchievements;
    
    UPROPERTY(EditAnywhere)
    int8 NumWardenAchievements;
    
    WAR_API FConquestOverNotificationInfo();
};

