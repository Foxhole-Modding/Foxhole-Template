#pragma once
#include "CoreMinimal.h"
#include "WarPlayerProfileSerialized.h"
#include "PutProfileRequest.generated.h"

USTRUCT(BlueprintType)
struct FPutProfileRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarPlayerProfileSerialized WarPlayerProfileSerialized;
    
    WAR_API FPutProfileRequest();
};

