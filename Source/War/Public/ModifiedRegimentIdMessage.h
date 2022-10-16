#pragma once
#include "CoreMinimal.h"
#include "ModifiedRegimentIdMessage.generated.h"

USTRUCT(BlueprintType)
struct FModifiedRegimentIdMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(EditAnywhere)
    int8 FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    WAR_API FModifiedRegimentIdMessage();
};

