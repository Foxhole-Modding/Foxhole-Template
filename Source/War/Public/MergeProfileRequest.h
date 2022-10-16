#pragma once
#include "CoreMinimal.h"
#include "MergeProfileRequest.generated.h"

USTRUCT(BlueprintType)
struct FMergeProfileRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> MergeDestProfileBlob;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> MergeSourceProfileBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProfileCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTotalProfiles;
    
    UPROPERTY(EditAnywhere)
    int64 StartTimeUnixTimeStamp;
    
    WAR_API FMergeProfileRequest();
};

