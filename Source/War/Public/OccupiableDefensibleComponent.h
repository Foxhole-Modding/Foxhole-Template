#pragma once
#include "CoreMinimal.h"
#include "OccupiableComponent.h"
#include "OccupiableDefensibleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UOccupiableDefensibleComponent : public UOccupiableComponent {
    GENERATED_BODY()
public:
    UOccupiableDefensibleComponent();
};

