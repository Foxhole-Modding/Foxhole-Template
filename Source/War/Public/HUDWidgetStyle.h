#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "HUDStyle.h"
#include "HUDWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UHUDWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHUDStyle WidgetStyle;
    
    UHUDWidgetStyle();
};

