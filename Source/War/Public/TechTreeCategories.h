#pragma once
#include "CoreMinimal.h"
#include "TechTreeCategory.h"
#include "TechTreeCategories.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeCategories {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTechTreeCategory Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTechTreeCategory Misc;
    
    WAR_API FTechTreeCategories();
};

