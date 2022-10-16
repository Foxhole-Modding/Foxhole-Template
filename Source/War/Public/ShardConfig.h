#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShardConfig.generated.h"

USTRUCT(BlueprintType)
struct FShardConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopulationCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EnabledRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ScheduledConquestStartTime;
    
    WAR_API FShardConfig();
};

