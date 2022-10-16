#pragma once
#include "CoreMinimal.h"
#include "VehicleProfileData.h"
#include "GameFramework/Info.h"
#include "EVehicleProfileType.h"
#include "VehicleProfileList.generated.h"

UCLASS(Blueprintable)
class WAR_API AVehicleProfileList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVehicleProfileType, FVehicleProfileData> VehicleProfileMap;
    
public:
    AVehicleProfileList();
};

