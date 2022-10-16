#pragma once
#include "CoreMinimal.h"
#include "StockpileEntry.h"
#include "StockpileBroadcastAlertInfo.generated.h"

class AStructure;

USTRUCT(BlueprintType)
struct FStockpileBroadcastAlertInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StockpilerOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StockpilerPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AStructure* StockpiledStructure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStockpileEntry> Submissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreSubmissionsCrates;
    
    WAR_API FStockpileBroadcastAlertInfo();
};

