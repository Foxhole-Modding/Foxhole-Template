#pragma once
#include "CoreMinimal.h"
#include "TunnelNode.h"
#include "StorageFacility.generated.h"

class UAITurretsControllerComponent;
class UGenericStockpileComponent;
class UCraneSpawnLocationComponent;
class UReserveStockpileComponent;
class UBoxComponent;
class USceneComponent;

UCLASS(Blueprintable)
class WAR_API AStorageFacility : public ATunnelNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UReserveStockpileComponent* ReserveStockpileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* DrivewayFootprintComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TransferLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAITurretsControllerComponent* AITurretsController;
    
public:
    AStorageFacility();
};

