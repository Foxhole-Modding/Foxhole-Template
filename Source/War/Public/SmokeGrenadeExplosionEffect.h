#pragma once
#include "CoreMinimal.h"
#include "WarExplosionEffect.h"
#include "SmokeGrenadeExplosionEffect.generated.h"

class UObscuringSphereComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class WAR_API ASmokeGrenadeExplosionEffect : public AWarExplosionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UObscuringSphereComponent* ObscuringSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumVisibilityRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* VisibilityRadiusCurve;
    
    ASmokeGrenadeExplosionEffect();
};

