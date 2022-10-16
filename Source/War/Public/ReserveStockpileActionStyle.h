#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "ReserveStockpileActionStyle.generated.h"

USTRUCT(BlueprintType)
struct FReserveStockpileActionStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle ButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTipText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ToolTipDescription;
    
    WAR_API FReserveStockpileActionStyle();
};

