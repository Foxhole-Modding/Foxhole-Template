#pragma once
#include "CoreMinimal.h"
#include "CreateSquadWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FCreateSquadWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(EditAnywhere)
    int8 FactionId;
    
    WAR_API FCreateSquadWarMessage();
};

