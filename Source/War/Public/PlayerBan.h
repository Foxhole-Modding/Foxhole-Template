#pragma once
#include "CoreMinimal.h"
#include "EBanReason.h"
#include "PlayerBan.generated.h"

USTRUCT(BlueprintType)
struct FPlayerBan {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeviceID;
    
    UPROPERTY(EditAnywhere)
    int64 BanLiftTimeUnix;
    
    UPROPERTY(EditAnywhere)
    EBanReason BanReason;
    
    UPROPERTY(EditAnywhere)
    int16 VoteKickCount;
    
    UPROPERTY(EditAnywhere)
    int64 LastVoteKickTime;
    
    UPROPERTY(EditAnywhere)
    int16 BanCount;
    
    UPROPERTY(EditAnywhere)
    int64 BanCountClearTime;
    
    WAR_API FPlayerBan();
};

