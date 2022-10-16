#pragma once
#include "CoreMinimal.h"
#include "EBridgeState.generated.h"

UENUM(BlueprintType)
enum EBridgeState {
    Closed,
    Closing,
    Opening,
    Open,
};

