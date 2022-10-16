#pragma once
#include "CoreMinimal.h"
#include "UObjectHandle.generated.h"

USTRUCT(BlueprintType)
struct FUObjectHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ObjectSerialNumber;
    
    WAR_API FUObjectHandle();
};

