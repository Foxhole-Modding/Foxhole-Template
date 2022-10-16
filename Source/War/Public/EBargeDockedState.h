#pragma once
#include "CoreMinimal.h"
#include "EBargeDockedState.generated.h"

UENUM(BlueprintType)
enum EBargeDockedState {
    Docked,
    Docking,
    Undocked,
    Undocking,
};

