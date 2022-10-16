#pragma once
#include "CoreMinimal.h"
#include "GlobalAdminCommandRequest.generated.h"

USTRUCT(BlueprintType)
struct FGlobalAdminCommandRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetServerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    WAR_API FGlobalAdminCommandRequest();
};

