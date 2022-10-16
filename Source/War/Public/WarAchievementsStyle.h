#pragma once
#include "CoreMinimal.h"
#include "WarAchievementConfig.h"
#include "Styling/SlateBrush.h"
#include "WarAchievementsStyle.generated.h"

USTRUCT(BlueprintType)
struct FWarAchievementsStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarAchievementConfig> WarAchievementConfigList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ProgressBarFill;
    
    WAR_API FWarAchievementsStyle();
};

