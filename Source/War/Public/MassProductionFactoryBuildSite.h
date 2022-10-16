#pragma once
#include "CoreMinimal.h"
#include "SpecializedFactoryBuildSite.h"
#include "MassProductionFactoryBuildSite.generated.h"

class UCraneSpawnLocationComponent;

UCLASS(Blueprintable)
class WAR_API AMassProductionFactoryBuildSite : public ASpecializedFactoryBuildSite {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    AMassProductionFactoryBuildSite();
};

