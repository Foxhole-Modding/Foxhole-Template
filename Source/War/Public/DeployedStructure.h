#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "DeployedStructure.generated.h"

class UOccupiableComponent;

UCLASS(Blueprintable)
class WAR_API ADeployedStructure : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOccupiableComponent* OccupiableComponent;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 TeamId;
    
public:
    ADeployedStructure();
};

