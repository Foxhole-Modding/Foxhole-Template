#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateColor.h"
#include "ItemSubtypeStyle.generated.h"

USTRUCT(BlueprintType)
struct FItemSubtypeStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondaryHudSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor IconColour;
    
    WAR_API FItemSubtypeStyle();
};

