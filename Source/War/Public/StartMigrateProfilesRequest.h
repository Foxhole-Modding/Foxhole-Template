#pragma once
#include "CoreMinimal.h"
#include "StartMigrateProfilesRequest.generated.h"

USTRUCT(BlueprintType)
struct FStartMigrateProfilesRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    WAR_API FStartMigrateProfilesRequest();
};

