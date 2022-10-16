#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "MapStyle.h"
#include "MapWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMapWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapStyle WidgetStyle;
    
    UMapWidgetStyle();
};

