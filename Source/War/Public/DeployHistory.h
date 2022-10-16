#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DeployHistory.generated.h"

USTRUCT(BlueprintType)
struct FDeployHistory {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastDeployTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastDeployTimeAlt;
    
public:
    WAR_API FDeployHistory();
};

