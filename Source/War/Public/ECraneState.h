#pragma once
#include "CoreMinimal.h"
#include "ECraneState.generated.h"

UENUM(BlueprintType)
enum ECraneState {
    Inactive,
    Destroyed,
    DeployingWeights,
    UndeployingWeights,
    DeployedWeights,
    PickingUp,
    DroppingOff,
    ResettingToDeployed,
};

