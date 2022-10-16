#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "RailSwitchUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URailSwitchUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
    URailSwitchUseComponent();
};

