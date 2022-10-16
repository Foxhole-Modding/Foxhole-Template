#pragma once
#include "CoreMinimal.h"
#include "EChatMessageType.generated.h"

UENUM(BlueprintType)
enum class EChatMessageType : uint8 {
    None,
    RegionTeam = 0x1,
    WorldTeam,
    Logistics = 0x4,
    Intel = 0x8,
    LocalAll = 0x10,
    Squad = 0x20,
    Regiment = 0x40,
    Whisper = 0x80,
    Operation = 0x81,//Operation = 0x100,
    Zombie = 0x82,//Zombie = 0x200,
    Admin = 0x83,//Admin = 0x400,
};

