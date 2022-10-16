#pragma once
#include "CoreMinimal.h"
#include "ProductionResource.generated.h"

USTRUCT(BlueprintType)
struct FProductionResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ItemCodeName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint16 Quantity;
    
    WAR_API FProductionResource();
};

