#pragma once
#include "CoreMinimal.h"
#include "WeaponShotSFX.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FWeaponShotSFX {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FiringLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FiringStopped;
    
    WAR_API FWeaponShotSFX();
};

