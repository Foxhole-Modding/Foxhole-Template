#pragma once
#include "CoreMinimal.h"
#include "PlayerBan.h"
#include "GetBanResponse.generated.h"

USTRUCT(BlueprintType)
struct FGetBanResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBan PlayerBan;
    
    WAR_API FGetBanResponse();
};

