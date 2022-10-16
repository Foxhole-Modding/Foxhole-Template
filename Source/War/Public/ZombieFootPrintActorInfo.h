#pragma once
#include "CoreMinimal.h"
#include "FootPrintActorInfo.h"
#include "ZombieFootPrintActorInfo.generated.h"

USTRUCT(BlueprintType)
struct FZombieFootPrintActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootPrintActorInfo Colonial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootPrintActorInfo Warden;
    
    WAR_API FZombieFootPrintActorInfo();
};

