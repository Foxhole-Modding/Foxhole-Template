#pragma once
#include "CoreMinimal.h"
#include "EChatChannel.h"
#include "ChatChannelStyle.h"
#include "RichTextFieldColor.h"
#include "ChatStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FChatStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EChatChannel, FChatChannelStyle> ChannelStyleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichTextFieldColor EnemyNameColor;
    
    FChatStyle();
};

