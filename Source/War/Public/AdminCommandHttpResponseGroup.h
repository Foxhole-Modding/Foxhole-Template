#pragma once
#include "CoreMinimal.h"
#include "AdminCommandHttpResponse.h"
#include "AdminCommandHttpResponseGroup.generated.h"

USTRUCT(BlueprintType)
struct FAdminCommandHttpResponseGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdminCommandHttpResponse> ResponseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    WAR_API FAdminCommandHttpResponseGroup();
};

