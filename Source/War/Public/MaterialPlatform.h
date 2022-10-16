#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "MaterialPlatform.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AMaterialPlatform : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
public:
    AMaterialPlatform();
};

