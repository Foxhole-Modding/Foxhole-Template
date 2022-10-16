#pragma once
#include "CoreMinimal.h"
#include "StartMergeProfilesRequest.generated.h"

USTRUCT(BlueprintType)
struct FStartMergeProfilesRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MergeDestDatabaseUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MergeSourceDatabaseUrl;
    
    WAR_API FStartMergeProfilesRequest();
};

