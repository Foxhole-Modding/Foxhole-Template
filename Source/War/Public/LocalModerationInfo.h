#pragma once
#include "CoreMinimal.h"
#include "LocalModerationInfo.generated.h"

USTRUCT(BlueprintType)
struct FLocalModerationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastUsedSteamID;
    
    WAR_API FLocalModerationInfo();
};

