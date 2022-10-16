#pragma once
#include "CoreMinimal.h"
#include "AnalyticsTeamKillInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsTeamKillInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeadPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeadPlayerOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TeamKillSource;
    
    WAR_API FAnalyticsTeamKillInfo();
};

