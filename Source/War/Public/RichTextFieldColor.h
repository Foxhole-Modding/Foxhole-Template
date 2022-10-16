#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RichTextFieldColor.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FRichTextFieldColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FRichTextFieldColor();
};

