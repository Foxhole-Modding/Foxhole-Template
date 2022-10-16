#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "StaticCheckBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FStaticCheckBoxStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BGImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FGImage;
    
    FStaticCheckBoxStyle();
};

