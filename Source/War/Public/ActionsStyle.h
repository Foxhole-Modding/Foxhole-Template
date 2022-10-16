#pragma once
#include "CoreMinimal.h"
#include "ActionStyle.h"
#include "ActionsStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FActionsStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActionStyle> Styles;
    
    FActionsStyle();
};

