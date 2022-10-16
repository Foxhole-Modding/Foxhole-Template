#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClientShardConfig.generated.h"

USTRUCT(BlueprintType)
struct FClientShardConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopulationCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredVictoryTowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ScheduledConquestStartTime;
    
    WAR_API FClientShardConfig();
};

