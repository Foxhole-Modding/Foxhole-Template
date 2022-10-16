#pragma once
#include "CoreMinimal.h"
#include "UObjectHandle.h"
#include "CheatViewRegimentInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct FCheatViewRegimentInfoRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Admin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    WAR_API FCheatViewRegimentInfoRequest();
};

