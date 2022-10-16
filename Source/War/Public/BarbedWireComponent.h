#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BarbedWireComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UBarbedWireComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UBarbedWireComponent();
};

