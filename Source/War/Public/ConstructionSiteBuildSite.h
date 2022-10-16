#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "ConstructionSiteBuildSite.generated.h"

class UCraneSpawnLocationComponent;

UCLASS(Blueprintable)
class WAR_API AConstructionSiteBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    AConstructionSiteBuildSite();
};

