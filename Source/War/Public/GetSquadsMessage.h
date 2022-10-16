#pragma once
#include "CoreMinimal.h"
#include "Squad.h"
#include "GetSquadsMessage.generated.h"

USTRUCT(BlueprintType)
struct FGetSquadsMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSquad> SquadList;
    
    WAR_API FGetSquadsMessage();
};

