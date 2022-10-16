#pragma once
#include "CoreMinimal.h"
#include "ETechComponentID.generated.h"

UENUM(BlueprintType)
enum class ETechComponentID : uint8 {
    None,
    RifleGarrison,
    MGGarrison,
    ATGarrison,
    HowitzerGarrison,
    Concrete,
    Deployment,
    AdvancedBunkers,
    CommandCenter,
    ListeningPost,
    Hospital,
    ProvisionalGarrison,
    SmallGarrison,
    LargeGarrison,
    Industry,
    Fortifications,
    ArtilleryShelter,
    RadioStation,
    OccupiedTown,
    ObservationBunkers,
    TechAvailable,
    Count,
};

