#pragma once
#include "CoreMinimal.h"
#include "CodeNameQuantity.generated.h"

USTRUCT(BlueprintType)
struct FCodeNameQuantity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    WAR_API FCodeNameQuantity();
};

