#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnalyticsUnstuckInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsUnstuckInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NewLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumUnstuckCommandsUsed;
    
    WAR_API FAnalyticsUnstuckInfo();
};

