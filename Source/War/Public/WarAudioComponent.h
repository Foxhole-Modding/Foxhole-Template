#pragma once
#include "CoreMinimal.h"
#include "Components/AudioComponent.h"
#include "WarAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWarAudioComponent : public UAudioComponent {
    GENERATED_BODY()
public:
    UWarAudioComponent();
};

