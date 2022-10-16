#pragma once
#include "CoreMinimal.h"
#include "ModifiedSquadIdRecord.generated.h"

USTRUCT(BlueprintType)
struct FModifiedSquadIdRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLeader;
    
    WAR_API FModifiedSquadIdRecord();
};

