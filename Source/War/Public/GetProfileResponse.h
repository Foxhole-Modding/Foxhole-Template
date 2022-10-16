#pragma once
#include "CoreMinimal.h"
#include "EGetProfileResponseCode.h"
#include "WarPlayerProfileSerialized.h"
#include "GetProfileResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetProfileResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGetProfileResponseCode ResponseCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWarPlayerProfileSerialized WarPlayerProfileSerializable;
    
    WAR_API FGetProfileResponse();
};

