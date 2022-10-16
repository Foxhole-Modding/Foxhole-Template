#pragma once
#include "CoreMinimal.h"
#include "SpecializedFactoryOrderItem.generated.h"

USTRUCT(BlueprintType)
struct FSpecializedFactoryOrderItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsPrototype;
    
    WAR_API FSpecializedFactoryOrderItem();
};

