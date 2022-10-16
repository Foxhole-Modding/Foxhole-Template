#pragma once
#include "CoreMinimal.h"
#include "EFireIntensity.h"
#include "FireIntensityThreshold.generated.h"

USTRUCT(BlueprintType)
struct FFireIntensityThreshold {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFireIntensity Intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlamesPerSquareMeter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CharacterBurn;
    
    WAR_API FFireIntensityThreshold();
};

