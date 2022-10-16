#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "GeneralPurposeIcons.generated.h"

USTRUCT(BlueprintType)
struct FGeneralPurposeIcons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush DownwardTriangle;
    
    WAR_API FGeneralPurposeIcons();
};

