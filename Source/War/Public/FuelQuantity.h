#pragma once
#include "CoreMinimal.h"
#include "FuelQuantity.generated.h"

USTRUCT(BlueprintType)
struct FFuelQuantity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Quantity;
    
    WAR_API FFuelQuantity();
};

