#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "ItemInstance.h"
#include "StorageBox.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AStorageBox : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> ItemsToReplenish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReplenishRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplenishFirstItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bReplenishedOnce;
    
public:
    AStorageBox();
};

