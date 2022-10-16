#pragma once
#include "CoreMinimal.h"
#include "ProjectileItemComponent.h"
#include "WaterBucketItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWaterBucketItemComponent : public UProjectileItemComponent {
    GENERATED_BODY()
public:
    UWaterBucketItemComponent();
};

