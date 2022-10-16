#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/StaticMeshComponent.h"
#include "PersistentProxyComponent.generated.h"

class APersistentProxy;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UPersistentProxyComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MigrationTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APersistentProxy> ProxyLoadingDock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersistentProxy* SpawnedLoadingDock;
    
public:
    UPersistentProxyComponent();
};

