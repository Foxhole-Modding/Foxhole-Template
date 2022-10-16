#pragma once
#include "CoreMinimal.h"
#include "StructureBuildSite.h"
#include "DrawbridgeBuildSite.generated.h"

class UPersistentProxyComponent;

UCLASS(Blueprintable)
class WAR_API ADrawbridgeBuildSite : public AStructureBuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* SideAProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UPersistentProxyComponent* SideBProxy;
    
    ADrawbridgeBuildSite();
};

