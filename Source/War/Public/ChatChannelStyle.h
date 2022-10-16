#pragma once
#include "CoreMinimal.h"
#include "RichTextFieldColor.h"
#include "ChatChannelStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FChatChannelStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichTextFieldColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichTextFieldColor MessageColor;
    
    FChatChannelStyle();
};

