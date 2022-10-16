#pragma once
#include "CoreMinimal.h"
#include "EBanReason.h"
#include "AnalyticsModBanInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsModBanInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationMins;
    
    UPROPERTY(EditAnywhere)
    EBanReason BanReason;
    
    WAR_API FAnalyticsModBanInfo();
};

