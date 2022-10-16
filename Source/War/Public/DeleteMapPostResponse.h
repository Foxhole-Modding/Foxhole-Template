#pragma once
#include "CoreMinimal.h"
#include "DeleteMapPostResponse.generated.h"

USTRUCT(BlueprintType)
struct FDeleteMapPostResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeletedPostOwnerOnlineID;
    
    WAR_API FDeleteMapPostResponse();
};

