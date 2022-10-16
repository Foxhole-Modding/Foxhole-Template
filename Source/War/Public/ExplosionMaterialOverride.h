#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DecalData.h"
#include "ExplosionMaterialOverride.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FExplosionMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EPhysicalSurface> PhysicalSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ExplosionFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDecalData Decal;
    
    WAR_API FExplosionMaterialOverride();
};

