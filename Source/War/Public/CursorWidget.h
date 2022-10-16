#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Styling/SlateBrush.h"
#include "CursorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class WAR_API UCursorWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UCursorWidget();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetCursorBrush() const;
    
};

