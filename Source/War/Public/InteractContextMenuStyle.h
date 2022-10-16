#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "InteractContextMenuStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FInteractContextMenuStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LadderIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ServerTravelPortalIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ReadableSignIcon;
    
    FInteractContextMenuStyle();
};

