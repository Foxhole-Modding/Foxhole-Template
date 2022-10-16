#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "BoatHullComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UBoatHullComponent : public UBoxComponent {
    GENERATED_BODY()
public:
    UBoatHullComponent();
};

