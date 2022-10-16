#pragma once
#include "CoreMinimal.h"
#include "EDeploymentState.generated.h"

UENUM(BlueprintType)
enum EDeploymentState {
    Idle,
    Deploying,
    Undeploying,
    Deployed,
    FullyDeployed,
    Failed,
};

