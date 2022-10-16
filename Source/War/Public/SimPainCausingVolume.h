#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PainCausingVolume.h"
#include "SimPainCausingVolume.generated.h"

UCLASS(Blueprintable)
class WAR_API ASimPainCausingVolume : public APainCausingVolume {
    GENERATED_BODY()
public:
    ASimPainCausingVolume();
};

