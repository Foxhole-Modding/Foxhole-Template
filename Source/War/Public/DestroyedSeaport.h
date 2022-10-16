#pragma once
#include "CoreMinimal.h"
#include "DestroyedStorageFacility.h"
#include "DestroyedSeaport.generated.h"

class UCraneSpawnLocationComponent;
class UPersistentProxyComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedSeaport : public ADestroyedStorageFacility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* ProxyLoadingDockComponent;
    
public:
    ADestroyedSeaport();
};

