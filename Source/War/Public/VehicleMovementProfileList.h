#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "VehicleMovementProfileData.h"
#include "EVehicleMovementProfileType.h"
#include "VehicleMovementProfileList.generated.h"

UCLASS(Blueprintable)
class WAR_API AVehicleMovementProfileList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVehicleMovementProfileType, FVehicleMovementProfileData> VehicleMovementProfileMap;
    
public:
    AVehicleMovementProfileList();
};

