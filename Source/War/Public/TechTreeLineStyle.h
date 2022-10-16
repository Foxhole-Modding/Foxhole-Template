#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "TechTreeLineStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FTechTreeLineStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush SolidColour;
    
    FTechTreeLineStyle();
};

