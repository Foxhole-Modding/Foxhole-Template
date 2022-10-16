#pragma once
#include "CoreMinimal.h"
#include "GlobalShardConfig.h"
#include "WarShardInfo.h"
#include "WarClientConfig.generated.h"

USTRUCT(BlueprintType)
struct FWarClientConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableOneWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGlobalShardConfig GlobalShardConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWarShardInfo> AvailableShardList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ConquestNews;
    
    WAR_API FWarClientConfig();
};

