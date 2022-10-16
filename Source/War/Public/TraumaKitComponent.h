#pragma once
#include "CoreMinimal.h"
#include "TaskItemComponent.h"
#include "TraumaKitComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UTraumaKitComponent : public UTaskItemComponent {
    GENERATED_BODY()
public:
    UTraumaKitComponent();
};

