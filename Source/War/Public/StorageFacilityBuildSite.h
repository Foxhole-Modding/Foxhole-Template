#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "StorageFacilityBuildSite.generated.h"

class UGenericStockpileComponent;
class UCraneSpawnLocationComponent;
class UReserveStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AStorageFacilityBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UReserveStockpileComponent* ReserveStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    AStorageFacilityBuildSite();
};

