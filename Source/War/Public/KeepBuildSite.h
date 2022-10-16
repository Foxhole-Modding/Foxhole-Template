#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "KeepBuildSite.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AKeepBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    AKeepBuildSite();
};

