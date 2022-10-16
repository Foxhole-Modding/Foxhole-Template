#pragma once
#include "CoreMinimal.h"
#include "EMapIntelligenceType.generated.h"

UENUM(BlueprintType)
enum class EMapIntelligenceType : uint8 {
    None,
    Soldier,
    Vehicle,
    Defense,
    Howitzer,
    Outpost,
    Watchtower,
    InactiveWatchtower,
    FieldHospital,
    GarrisonStation,
    Zombie,
    ObservationBunkerT2,
    ObservationBunkerT3,
    Facility,
    NumTypes,
};

