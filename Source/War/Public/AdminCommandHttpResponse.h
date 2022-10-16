#pragma once
#include "CoreMinimal.h"
#include "AdminCommandHttpResponse.generated.h"

USTRUCT(BlueprintType)
struct FAdminCommandHttpResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ServerName;
    
    WAR_API FAdminCommandHttpResponse();
};

