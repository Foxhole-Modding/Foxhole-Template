#pragma once
#include "CoreMinimal.h"
#include "FortBuildSite.h"
#include "FuelTank.h"
#include "EngineRoomBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API AEngineRoomBuildSite : public AFortBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FFuelTank FuelTank;
    
    AEngineRoomBuildSite();
};

