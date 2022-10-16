#pragma once
#include "CoreMinimal.h"
#include "GameplayFlags.generated.h"

USTRUCT(BlueprintType)
struct FGameplayFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Flags;
    
    WAR_API FGameplayFlags();
};

