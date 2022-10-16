#pragma once
#include "CoreMinimal.h"
#include "WarRecord.generated.h"

USTRUCT(BlueprintType)
struct FWarRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 ConquestWinner;
    
    UPROPERTY(EditAnywhere)
    int64 StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ColonialWarAchievementProgressList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> WardenWarAchievementProgressList;
    
    WAR_API FWarRecord();
};

