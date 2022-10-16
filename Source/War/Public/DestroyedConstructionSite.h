#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "DestroyedConstructionSite.generated.h"

class UCraneSpawnLocationComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedConstructionSite : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    ADestroyedConstructionSite();
};

