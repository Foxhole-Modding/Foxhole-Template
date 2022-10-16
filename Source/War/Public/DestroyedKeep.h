#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "DestroyedKeep.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedKeep : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    ADestroyedKeep();
};

