#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "RefinementOrderInfo.h"
#include "RefineryBuildSite.generated.h"

class UGenericStockpileComponent;
class UCraneSpawnLocationComponent;

UCLASS(Blueprintable)
class WAR_API ARefineryBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FString, FRefinementOrderInfo> RefinementOrderMap;
    
    ARefineryBuildSite();
};

