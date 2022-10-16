#pragma once
#include "CoreMinimal.h"
#include "ModifiedSquadIdRecord.h"
#include "ModifiedSquadIdMessage.generated.h"

USTRUCT(BlueprintType)
struct FModifiedSquadIdMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int8 FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModifiedSquadIdRecord> Records;
    
    WAR_API FModifiedSquadIdMessage();
};

