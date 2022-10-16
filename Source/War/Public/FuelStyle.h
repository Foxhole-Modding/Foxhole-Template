#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "FuelStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FFuelStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle Button;
    
    FFuelStyle();
};

