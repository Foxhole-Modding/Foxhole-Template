#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "WarBeaconHost.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API AWarBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
    AWarBeaconHost();
};

