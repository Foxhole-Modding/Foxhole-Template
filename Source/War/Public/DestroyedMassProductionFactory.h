#pragma once
#include "CoreMinimal.h"
#include "DestroyedSpecializedFactory.h"
#include "DestroyedMassProductionFactory.generated.h"

class UCraneSpawnLocationComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedMassProductionFactory : public ADestroyedSpecializedFactory {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    ADestroyedMassProductionFactory();
};

