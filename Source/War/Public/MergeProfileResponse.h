#pragma once
#include "CoreMinimal.h"
#include "MergeProfileResponse.generated.h"

USTRUCT(BlueprintType)
struct FMergeProfileResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> MergedProfileBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProfileCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTotalProfiles;
    
    UPROPERTY(EditAnywhere)
    int64 StartTimeUnixTimeStamp;
    
    WAR_API FMergeProfileResponse();
};

