#pragma once
#include "CoreMinimal.h"
#include "FactionResourceState.h"
#include "GlobalResourceState.generated.h"

USTRUCT(BlueprintType)
struct FGlobalResourceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionResourceState Colonials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactionResourceState Wardens;
    
    WAR_API FGlobalResourceState();
};

