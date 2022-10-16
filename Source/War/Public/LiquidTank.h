#pragma once
#include "CoreMinimal.h"
#include "LiquidTank.generated.h"

USTRUCT(BlueprintType)
struct FLiquidTank {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float MaxAmount;
    
    WAR_API FLiquidTank();
};

