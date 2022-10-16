#pragma once
#include "CoreMinimal.h"
#include "ESimCharacterStance.h"
#include "EmoteActivityOptions.generated.h"

USTRUCT(BlueprintType)
struct FEmoteActivityOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESimCharacterStance> AllowedStances;
    
    WAR_API FEmoteActivityOptions();
};

