#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterialResolver.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FPhysicalMaterialResolver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicalMaterial*> MaterialsEffectedByImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* ImpactedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* SnowMaterial;
    
    WAR_API FPhysicalMaterialResolver();
};

