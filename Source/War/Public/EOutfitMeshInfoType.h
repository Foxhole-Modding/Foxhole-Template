#pragma once
#include "CoreMinimal.h"
#include "EOutfitMeshInfoType.generated.h"

UENUM(BlueprintType)
enum class EOutfitMeshInfoType : uint8 {
    Invalid,
    Default,
    ColonialMale,
    ColonialFemale,
    ColonialMaleZombie,
    ColonialFemaleZombie,
    ColonialZombieSpitter,
    ColonialZombieTank,
    WardenMale,
    WardenFemale,
    WardenMaleZombie,
    WardenFemaleZombie,
    WardenZombieSpitter,
    WardenZombieTank,
};

