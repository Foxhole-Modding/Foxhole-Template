#pragma once
#include "CoreMinimal.h"
#include "AdminCommandResult.generated.h"

USTRUCT(BlueprintType)
struct FAdminCommandResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    WAR_API FAdminCommandResult();
};

