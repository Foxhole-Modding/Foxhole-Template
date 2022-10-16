#pragma once
#include "CoreMinimal.h"
#include "ActivityIndicatorStyle.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FActivityIndicatorStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AlphaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
    WAR_API FActivityIndicatorStyle();
};

