#pragma once
#include "CoreMinimal.h"
#include "EBanReason.h"
#include "ModBanRequest.generated.h"

USTRUCT(BlueprintType)
struct FModBanRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetDeviceId;
    
    UPROPERTY(EditAnywhere)
    int8 TargetPlayerTeamId;
    
    UPROPERTY(EditAnywhere)
    int64 BanDurationSec;
    
    UPROPERTY(EditAnywhere)
    EBanReason BanReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminPlayerName;
    
    WAR_API FModBanRequest();
};

