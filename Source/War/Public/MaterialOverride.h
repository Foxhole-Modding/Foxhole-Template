#pragma once
#include "CoreMinimal.h"
#include "MaterialOverride.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FMaterialOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* Material;
    
    WAR_API FMaterialOverride();
};

