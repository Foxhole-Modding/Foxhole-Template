#pragma once
#include "CoreMinimal.h"
#include "MergeProfilesStatusMessage.generated.h"

USTRUCT(BlueprintType)
struct FMergeProfilesStatusMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    WAR_API FMergeProfilesStatusMessage();
};

