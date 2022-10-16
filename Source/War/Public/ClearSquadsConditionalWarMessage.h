#pragma once
#include "CoreMinimal.h"
#include "ClearSquadsConditionalWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FClearSquadsConditionalWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAgeMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHistoricalPlayers;
    
    WAR_API FClearSquadsConditionalWarMessage();
};

