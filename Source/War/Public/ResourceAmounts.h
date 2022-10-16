#pragma once
#include "CoreMinimal.h"
#include "CodeNameSmallQuantity.h"
#include "ResourceAmounts.generated.h"

USTRUCT(BlueprintType)
struct FResourceAmounts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FCodeNameSmallQuantity Resource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FCodeNameSmallQuantity> OtherResources;
    
    WAR_API FResourceAmounts();
};

