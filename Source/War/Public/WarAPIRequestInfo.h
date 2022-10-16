#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WarAPIRequestInfo.generated.h"

USTRUCT(BlueprintType)
struct FWarAPIRequestInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastRequestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ETag;
    
    WAR_API FWarAPIRequestInfo();
};

