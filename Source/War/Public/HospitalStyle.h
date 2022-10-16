#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "HospitalStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FHospitalStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RecoveryProgressBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush RecoveryProgressFillImage;
    
    FHospitalStyle();
};

