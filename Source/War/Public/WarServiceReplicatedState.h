#pragma once
#include "CoreMinimal.h"
#include "SquadReplicatedState.h"
#include "WarServiceReplicatedState.generated.h"

USTRUCT(BlueprintType)
struct FWarServiceReplicatedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadReplicatedState SquadReplicatedState;
    
    WAR_API FWarServiceReplicatedState();
};

