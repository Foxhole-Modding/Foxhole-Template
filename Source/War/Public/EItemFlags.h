#pragma once
#include "CoreMinimal.h"
#include "EItemFlags.generated.h"

UENUM(BlueprintType)
enum class EItemFlags : uint8 {
    None,
    Default,
    BasicMaterial,
    GasMaskFilter = 0x4,
    Grenade = 0x8,
    HeavyAmmo = 0x10,
    HeavyWeapon = 0x20,
    KineticAmmo = 0x40,
    KineticWeapon = 0x80,
    Material = 0x81,//Material = 0x100,
    MedicalAmmo = 0x82,//MedicalAmmo = 0x200,
    MedicalKit = 0x83,//MedicalKit = 0x400,
    RawResource = 0x84,//RawResource = 0x800,
    LightKineticAmmo = 0x85,//LightKineticAmmo = 0x1000,
    PistolAmmo = 0x86,//PistolAmmo = 0x2000,
    LightExplosiveAmmo = 0x87,//LightExplosiveAmmo = 0x4000,
};

