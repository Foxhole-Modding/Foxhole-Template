#pragma once
#include "CoreMinimal.h"
#include "AssemblyItem.h"
#include "FuelQuantity.h"
#include "AssemblyModification.generated.h"

USTRUCT(BlueprintType)
struct FAssemblyModification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAssemblyItem> AssemblyItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelQuantity FuelCost;
    
    WAR_API FAssemblyModification();
};

