#pragma once
#include "CoreMinimal.h"
#include "EVehicleProfileType.generated.h"

UENUM(BlueprintType)
enum class EVehicleProfileType : uint8 {
    Default,
    WheeledTransport,
    OpenRoofWheeledTransport,
    WheeledArmoured,
    TrackedTransport,
    Tank,
    FieldWeapon,
    BeachableShip,
    Ship,
    CombatShip,
    Construction,
    Bicycle,
    Rail,
    RailCar,
    MAX,
};

