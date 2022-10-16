#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TimedProjectile.h"
#include "DeadlyGasGrenadeProjectile.generated.h"

class AWarPainVolume;

UCLASS(Blueprintable)
class WAR_API ADeadlyGasGrenadeProjectile : public ATimedProjectile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarPainVolume> PainVolumeTemplate;
    
    ADeadlyGasGrenadeProjectile();
};

