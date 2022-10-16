#pragma once
#include "CoreMinimal.h"
#include "ECharacterActivityState.h"
#include "ActivityStateChange.generated.h"

USTRUCT(BlueprintType)
struct FActivityStateChange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 LastAckedSequence;
    
    UPROPERTY(EditAnywhere)
    uint8 Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterActivityState State;
    
    WAR_API FActivityStateChange();
};

