#pragma once
#include "CoreMinimal.h"
#include "Squad.h"
#include "ModifiedSquadMessage.generated.h"

USTRUCT(BlueprintType)
struct FModifiedSquadMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquad ModifiedSquad;
    
    WAR_API FModifiedSquadMessage();
};

