#pragma once
#include "CoreMinimal.h"
#include "HitScanWeaponComponent.h"
#include "SniperRifleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API USniperRifleComponent : public UHitScanWeaponComponent {
    GENERATED_BODY()
public:
    USniperRifleComponent();
};

