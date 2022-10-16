#pragma once
#include "CoreMinimal.h"
#include "EClassRepNodeMapping.generated.h"

UENUM(BlueprintType)
enum class EClassRepNodeMapping : uint8 {
    NotRouted,
    RelevantAllConnections,
    RailVehicle,
    Spatialize_Static,
    Spatialize_Dynamic,
    Spatialize_Dormancy,
};

