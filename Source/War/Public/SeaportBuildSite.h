#pragma once
#include "CoreMinimal.h"
#include "StorageFacilityBuildSite.h"
#include "SeaportBuildSite.generated.h"

class UCraneSpawnLocationComponent;
class UPersistentProxyComponent;

UCLASS(Blueprintable)
class WAR_API ASeaportBuildSite : public AStorageFacilityBuildSite {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* ProxyLoadingDockComponent;
    
public:
    ASeaportBuildSite();
};

