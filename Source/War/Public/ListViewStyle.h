#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "ListViewStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FListViewStyle {
    GENERATED_BODY()
public:
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeaderRowStyle ListHeaderRowStyle;
    
    FListViewStyle();
};

