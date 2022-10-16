#pragma once
#include "CoreMinimal.h"
#include "ReservableStructure.h"
#include "Container.generated.h"

class UStaticMeshComponent;
class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AContainer : public AReservableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    AContainer();
};

