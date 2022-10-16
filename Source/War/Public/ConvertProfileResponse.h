#pragma once
#include "CoreMinimal.h"
#include "PlayerBan.h"
#include "WarPlayerProfileSerialized.h"
#include "ConvertProfileResponse.generated.h"

USTRUCT(BlueprintType)
struct FConvertProfileResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBan PlayerBan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarPlayerProfileSerialized WarPlayerProfileSerialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProfileCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumTotalProfiles;
    
    UPROPERTY(EditAnywhere)
    int64 StartTime;
    
    WAR_API FConvertProfileResponse();
};

