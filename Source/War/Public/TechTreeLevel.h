#pragma once
#include "CoreMinimal.h"
#include "TechTreeItem.h"
#include "TechTreeLevel.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemCodeName;
    
    UPROPERTY(EditAnywhere)
    uint16 ItemsRequired;
    
    UPROPERTY(EditAnywhere)
    uint16 TechRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTechTreeItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTechTreeItem> SecondaryItems;
    
    WAR_API FTechTreeLevel();
};

