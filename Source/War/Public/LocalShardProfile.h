#pragma once
#include "CoreMinimal.h"
#include "GameServerProfile.h"
#include "LocalShardProfile.generated.h"

USTRUCT(BlueprintType)
struct FLocalShardProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameServerProfile GameServerProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastWarId;
    
    WAR_API FLocalShardProfile();
};

