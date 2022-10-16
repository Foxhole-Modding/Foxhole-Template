#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "InfrastructureStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FInfrastructureStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FInfrastructureStyle();
};

