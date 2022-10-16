#pragma once
#include "CoreMinimal.h"
#include "EStructureFlag.generated.h"

UENUM(BlueprintType)
enum class EStructureFlag : uint8 {
    None,
    Invulnerable,
    VictoryTown,
    IndustrialTown = 0x4,
    ColonialLiberated = 0x8,
    WardenLiberated = 0x10,
    Port = 0x20,
    LastFlag = 0x80,
};

