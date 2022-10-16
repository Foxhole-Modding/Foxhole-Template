#pragma once
#include "CoreMinimal.h"
#include "CodeNameSmallQuantity.generated.h"

USTRUCT(BlueprintType)
struct FCodeNameSmallQuantity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    int16 Quantity;
    
    WAR_API FCodeNameSmallQuantity();
};

