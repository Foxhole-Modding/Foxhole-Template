#pragma once
#include "CoreMinimal.h"
#include "GetSquadInfoWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FGetSquadInfoWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(EditAnywhere)
    int8 FactionId;
    
    WAR_API FGetSquadInfoWarMessage();
};

