#pragma once
#include "CoreMinimal.h"
#include "ConvertProfileRequest.generated.h"

USTRUCT(BlueprintType)
struct FConvertProfileRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> PlayerProfileBlob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProfileCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTotalProfiles;
    
    UPROPERTY(EditAnywhere)
    int64 StartTime;
    
    WAR_API FConvertProfileRequest();
};

