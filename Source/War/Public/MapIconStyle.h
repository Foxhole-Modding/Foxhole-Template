#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "MapIconStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FMapIconStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTeamSpecificIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyViewableBySameTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntelDetectionRadius;
    
private:
    UPROPERTY(EditAnywhere)
    FSlateBrush FactionIconBrushes[3];
    
public:
    FMapIconStyle();
};

