#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SecondaryResourceWeight.generated.h"

class AItemPickup;

USTRUCT(BlueprintType)
struct FSecondaryResourceWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AItemPickup> ResourcePickupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    WAR_API FSecondaryResourceWeight();
};

