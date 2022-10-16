#pragma once
#include "CoreMinimal.h"
#include "SimPlayerController.h"
#include "WarBenchmarkPlayerController.generated.h"

UCLASS(Blueprintable)
class WAR_API AWarBenchmarkPlayerController : public ASimPlayerController {
    GENERATED_BODY()
public:
    AWarBenchmarkPlayerController();
};

