#pragma once
#include "CoreMinimal.h"
#include "ETechID.h"
#include "TechTreeItem.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FTechTreeItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(EditAnywhere)
    ETechID TechID;
    
    FTechTreeItem();
};

