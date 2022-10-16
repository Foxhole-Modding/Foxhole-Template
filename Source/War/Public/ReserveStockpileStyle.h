#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ReserveStockpileActionStyle.h"
#include "ReserveStockpileStyle.generated.h"

USTRUCT(BlueprintType)
struct FReserveStockpileStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReserveStockpileActionStyle ReleaseButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReserveStockpileActionStyle MakeHiddenButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReserveStockpileActionStyle MakeVisibleButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReserveStockpileActionStyle ViewAccessCodeButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReserveStockpileActionStyle CopyAccessCodeButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TabIcon;
    
    WAR_API FReserveStockpileStyle();
};

