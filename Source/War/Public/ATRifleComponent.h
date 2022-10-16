#pragma once
#include "CoreMinimal.h"
#include "HitScanWeaponComponent.h"
#include "ATRifleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UATRifleComponent : public UHitScanWeaponComponent {
    GENERATED_BODY()
public:
    UATRifleComponent();
};

