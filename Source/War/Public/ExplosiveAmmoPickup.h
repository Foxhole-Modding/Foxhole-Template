#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AmmoPickup.h"
#include "ExplosiveAmmoPickup.generated.h"

class AWarExplosionEffect;
class USoundCue;

UCLASS(Blueprintable)
class WAR_API AExplosiveAmmoPickup : public AAmmoPickup {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWarExplosionEffect> ExplosionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShotSoundCue;
    
public:
    AExplosiveAmmoPickup();
};

