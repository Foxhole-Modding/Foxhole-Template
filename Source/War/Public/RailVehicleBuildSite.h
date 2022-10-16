#pragma once
#include "CoreMinimal.h"
#include "VehicleBuildSite.h"
#include "RailVehicleBuildSite.generated.h"

UCLASS(Blueprintable)
class WAR_API ARailVehicleBuildSite : public AVehicleBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString FrontTrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString RearTrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float FrontTrackPackedAlpha;
    
    ARailVehicleBuildSite();
};

