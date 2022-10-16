#pragma once
#include "CoreMinimal.h"
#include "ActivateSquadWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FActivateSquadWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    WAR_API FActivateSquadWarMessage();
};

