#pragma once
#include "CoreMinimal.h"
#include "AdminSteamInfo.generated.h"

USTRUCT(BlueprintType)
struct FAdminSteamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString steamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    WAR_API FAdminSteamInfo();
};

