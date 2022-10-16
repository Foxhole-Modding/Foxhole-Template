#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "WarMenuStyle.h"
#include "WarMenuWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UWarMenuWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarMenuStyle WidgetStyle;
    
    UWarMenuWidgetStyle();
};

