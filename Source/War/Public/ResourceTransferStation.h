#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "ResourceTransferStation.generated.h"

class UGenericStockpileComponent;
class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AResourceTransferStation : public ATeamStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    AResourceTransferStation();
};

