#pragma once
#include "CoreMinimal.h"
#include "UObjectHandle.h"
#include "CheatViewSquadInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct FCheatViewSquadInfoRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Admin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    WAR_API FCheatViewSquadInfoRequest();
};

