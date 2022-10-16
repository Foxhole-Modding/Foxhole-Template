#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "InputStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FInputStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PageUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PageDown;
    
    FInputStyle();
};

