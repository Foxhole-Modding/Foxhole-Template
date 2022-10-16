#pragma once
#include "CoreMinimal.h"
#include "ETooltipDetailType.h"
#include "TooltipDetailText.generated.h"

USTRUCT(BlueprintType)
struct FTooltipDetailText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETooltipDetailType TooltipDetailType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    WAR_API FTooltipDetailText();
};

