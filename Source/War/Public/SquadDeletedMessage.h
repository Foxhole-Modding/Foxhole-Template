#pragma once
#include "CoreMinimal.h"
#include "SquadDeletedMessage.generated.h"

USTRUCT(BlueprintType)
struct FSquadDeletedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    WAR_API FSquadDeletedMessage();
};

