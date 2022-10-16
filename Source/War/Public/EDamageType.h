#pragma once
#include "CoreMinimal.h"
#include "EDamageType.generated.h"

UENUM(BlueprintType)
enum class EDamageType : uint8 {
    None,
    LightKinetic,
    HeavyKinetic,
    AntiTankKinetic,
    AntiTankExplosive,
    ArmourPiercing,
    Explosive,
    HighExplosive,
    Demolition,
    Karate,
    Shrapnel,
    TankZombie,
    PoisonGas,
    Environment,
    GroundZero,
    Decay,
    Incendiary,
    IncendiaryHighExplosive,
    Fire,
    MAX,
};

