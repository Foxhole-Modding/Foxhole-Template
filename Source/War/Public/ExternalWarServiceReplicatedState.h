#pragma once
#include "CoreMinimal.h"
#include "RegimentClientReplicatedState.h"
#include "ExternalWarServiceReplicatedState.generated.h"

USTRUCT(BlueprintType)
struct FExternalWarServiceReplicatedState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegimentClientReplicatedState RegimentClientReplicatedState;
    
    WAR_API FExternalWarServiceReplicatedState();
};

