#pragma once
#include "CoreMinimal.h"
#include "MountComponent.h"
#include "ConstructionGunnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UConstructionGunnerComponent : public UMountComponent {
    GENERATED_BODY()
public:
    UConstructionGunnerComponent();
};

