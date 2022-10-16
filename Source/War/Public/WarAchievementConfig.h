#pragma once
#include "CoreMinimal.h"
#include "EWarAchievementType.h"
#include "Styling/SlateBrush.h"
#include "WarAchievementConfig.generated.h"

USTRUCT(BlueprintType)
struct FWarAchievementConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWarAchievementType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    WAR_API FWarAchievementConfig();
};

