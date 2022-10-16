#pragma once
#include "CoreMinimal.h"
#include "WarAPIWarReportSummary.generated.h"

USTRUCT(BlueprintType)
struct FWarAPIWarReportSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DayOfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ColonialCasualties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WardenCasualties;
    
    WAR_API FWarAPIWarReportSummary();
};

