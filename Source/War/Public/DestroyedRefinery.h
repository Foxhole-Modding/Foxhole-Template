#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "RefinementOrderInfo.h"
#include "DestroyedRefinery.generated.h"

class UGenericStockpileComponent;
class UCraneSpawnLocationComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedRefinery : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, FRefinementOrderInfo> RefinementOrderMap;
    
    ADestroyedRefinery();
};

