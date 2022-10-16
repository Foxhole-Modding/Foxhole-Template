#pragma once
#include "CoreMinimal.h"
#include "SquadReplicatedState.generated.h"

USTRUCT(BlueprintType)
struct FSquadReplicatedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ActiveSquadIdList;
    
    WAR_API FSquadReplicatedState();
};

