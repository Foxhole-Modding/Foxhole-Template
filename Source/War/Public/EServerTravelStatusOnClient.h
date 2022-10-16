#pragma once
#include "CoreMinimal.h"
#include "EServerTravelStatusOnClient.generated.h"

UENUM(BlueprintType)
enum class EServerTravelStatusOnClient : uint8 {
    Invalid,
    TravelStarted,
    TravelFinished,
};

