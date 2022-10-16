#pragma once
#include "CoreMinimal.h"
#include "GlobalShardProfile.h"
#include "LocalShardProfile.h"
#include "WarPlayerProfile.generated.h"

USTRUCT(BlueprintType)
struct FWarPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalShardProfile GlobalShardProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalShardProfile LocalShardProfile;
    
    WAR_API FWarPlayerProfile();
};

