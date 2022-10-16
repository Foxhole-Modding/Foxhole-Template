#pragma once
#include "CoreMinimal.h"
#include "Regiment.h"
#include "RegimentClientReplicatedState.generated.h"

USTRUCT(BlueprintType)
struct FRegimentClientReplicatedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRegiment> ActiveRegimentList;
    
    WAR_API FRegimentClientReplicatedState();
};

