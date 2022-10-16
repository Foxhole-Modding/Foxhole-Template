#pragma once
#include "CoreMinimal.h"
#include "EUniformType.generated.h"

UENUM(BlueprintType)
enum class EUniformType : uint8 {
    Default,
    AmmoW,
    ArmourC,
    ArmourW,
    ChemicalW,
    EngineerC,
    EngineerW,
    GrenadeC,
    MedicC,
    MedicW,
    OfficerC,
    OfficerW,
    RainC,
    ScoutC,
    ScoutW,
    SnowC,
    SnowW,
    SoldierC,
    SoldierW,
    TankC,
    TankW,
    MAX,
};

