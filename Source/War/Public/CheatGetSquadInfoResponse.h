#pragma once
#include "CoreMinimal.h"
#include "CheatGetSquadInfoRequest.h"
#include "CheatGetSquadInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct FCheatGetSquadInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCheatGetSquadInfoRequest CheatGetSquadInfoRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpectedSquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ColonialSquadIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> WardenSquadIds;
    
    WAR_API FCheatGetSquadInfoResponse();
};

