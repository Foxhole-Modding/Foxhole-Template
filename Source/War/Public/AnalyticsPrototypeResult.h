#pragma once
#include "CoreMinimal.h"
#include "AnalyticsPrototypeResult.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsPrototypeResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrototypeCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrototypeComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrototypeSucceeded;
    
    WAR_API FAnalyticsPrototypeResult();
};

