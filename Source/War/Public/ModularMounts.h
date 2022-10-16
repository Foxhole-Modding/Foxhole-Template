#pragma once
#include "CoreMinimal.h"
#include "ModularMount.h"
#include "ModularMounts.generated.h"

USTRUCT(BlueprintType)
struct FModularMounts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModularMount> Entries;
    
    WAR_API FModularMounts();
};

