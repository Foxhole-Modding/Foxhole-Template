#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "ListeningAreaStyle.generated.h"

USTRUCT(BlueprintType)
struct FListeningAreaStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RadiusBrush;
    
    WAR_API FListeningAreaStyle();
};

