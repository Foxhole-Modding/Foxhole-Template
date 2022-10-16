#pragma once
#include "CoreMinimal.h"
#include "FactoryProductionItem.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FFactoryProductionItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    FFactoryProductionItem();
};

