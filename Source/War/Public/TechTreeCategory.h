#pragma once
#include "CoreMinimal.h"
#include "TechTreeLevel.h"
#include "TechTreeCategory.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTechTreeLevel> Levels;
    
    WAR_API FTechTreeCategory();
};

