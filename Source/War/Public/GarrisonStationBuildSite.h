#pragma once
#include "CoreMinimal.h"
#include "GarrisonHouseBuildSite.h"
#include "AssignableSpawnPoint.h"
#include "SpawnPoints.h"
#include "GarrisonStationBuildSite.generated.h"

class UGenericStockpileComponent;
class UTechTreeComponent;

UCLASS(Blueprintable)
class WAR_API AGarrisonStationBuildSite : public AGarrisonHouseBuildSite, public IAssignableSpawnPoint {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UTechTreeComponent* TechTreeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSpawnPoints SpawnPoints;
    
public:
    AGarrisonStationBuildSite();
    
    // Fix for true pure virtual functions not being implemented
};

