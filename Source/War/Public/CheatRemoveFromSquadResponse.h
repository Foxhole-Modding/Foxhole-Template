#pragma once
#include "CoreMinimal.h"
#include "CheatRemoveFromSquadRequest.h"
#include "CheatRemoveFromSquadResponse.generated.h"

USTRUCT(BlueprintType)
struct FCheatRemoveFromSquadResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatRemoveFromSquadRequest CheatRemoveFromSquadRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RemovedFromColonialSquadIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RemovedFromWardenSquadIds;
    
    WAR_API FCheatRemoveFromSquadResponse();
};

