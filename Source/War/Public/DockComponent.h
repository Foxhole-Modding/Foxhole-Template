#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "DockComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UDockComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UDockComponent();
};

