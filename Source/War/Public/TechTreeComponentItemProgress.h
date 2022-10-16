#pragma once
#include "CoreMinimal.h"
#include "ETechComponentID.h"
#include "TechTreeComponentItemProgress.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeComponentItemProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    ETechComponentID TechID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Amount;
    
    WAR_API FTechTreeComponentItemProgress();
};

