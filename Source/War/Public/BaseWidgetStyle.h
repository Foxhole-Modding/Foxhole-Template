#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "BaseStyle.h"
#include "BaseWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBaseWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseStyle WidgetStyle;
    
    UBaseWidgetStyle();
};

