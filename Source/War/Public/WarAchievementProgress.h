#pragma once
#include "CoreMinimal.h"
#include "WarAchievementProgress.generated.h"

USTRUCT(BlueprintType)
struct FWarAchievementProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ColonialProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WardenProgress;
    
    WAR_API FWarAchievementProgress();
};

