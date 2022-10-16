#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "TechTreeItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BrushOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionOverride;
    
    WAR_API FTechTreeItemInfo();
};

