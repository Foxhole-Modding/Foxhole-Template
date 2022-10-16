#pragma once
#include "CoreMinimal.h"
#include "RefinementOrder.h"
#include "RefinableItemInfo.h"
#include "ResourceConverter.generated.h"

USTRUCT(BlueprintType)
struct FResourceConverter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRefinementOrder> OrderList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FRefinableItemInfo> RefinableItems;
    
public:
    WAR_API FResourceConverter();
};

