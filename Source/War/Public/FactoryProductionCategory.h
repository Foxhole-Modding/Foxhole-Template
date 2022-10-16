#pragma once
#include "CoreMinimal.h"
#include "EFactoryQueueType.h"
#include "FactoryProductionItem.h"
#include "FactoryProductionCategory.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FFactoryProductionCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactoryQueueType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFactoryProductionItem> CategoryItems;
    
    FFactoryProductionCategory();
};

