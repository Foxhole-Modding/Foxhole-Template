#pragma once
#include "CoreMinimal.h"
#include "MaterialOverride.h"
#include "FestivalRenderInfo.generated.h"

USTRUCT(BlueprintType)
struct FFestivalRenderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialOverride> MaterialOverrides;
    
    WAR_API FFestivalRenderInfo();
};

