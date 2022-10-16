#pragma once
#include "CoreMinimal.h"
#include "SurfaceMovementData.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FSurfaceMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaDrainModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeedModifier;
    
    WAR_API FSurfaceMovementData();
};

