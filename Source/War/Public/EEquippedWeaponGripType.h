#pragma once
#include "CoreMinimal.h"
#include "EEquippedWeaponGripType.generated.h"

UENUM(BlueprintType)
enum class EEquippedWeaponGripType : uint8 {
    None,
    Rifle,
    Pistol,
    RPG,
    Sniper,
    HeavyMachinegun,
    Mortar,
    VehicleFieldArtillery,
    VehicleHalfTrack,
    VehicleMotorCycleDriver,
    StaticArtilleryGunner,
    SingleHandItem,
    VehicleFieldMachineGunDriver,
    VehicleFieldMachineGunGunner,
    ClimbingLadder,
    VehicleGunboatHmgGunner,
    VehicleGunboatCannonGunner,
    LargeProneRifle,
    VehicleMotorboatDriver,
    LargeDeployableItem,
    HeavySingleHandItem,
    CarryingPlayer,
    DeployedTwoHandedWeapon,
    Shovel,
    LightMachineGun,
    SeatedDoubleHandedCrank,
    BicycleDriver,
    VehicleLmgGunner,
    VehicleSeatedLmgGunner,
    VehicleRpgGunner,
    VehicleDriver,
    VehicleDriverNarrow,
    VehicleSeatedVerticalMoveOnlyGunner,
    CarryingCriticalSoldier,
    CarriedPlayer,
    SeatedLeftSideCrank,
    StandingLeftSideCrank,
    RPGHeavy,
    RPGLight,
    VehicleTrainDriver,
    VehicleSmallTrainDriver,
    Flamethrower,
};

