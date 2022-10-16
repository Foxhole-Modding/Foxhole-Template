#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "WatchTower.generated.h"

class UMapIntelligenceSourceComponent;
class UTeamFlagMeshComponent;

UCLASS(Blueprintable)
class WAR_API AWatchTower : public ATeamStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UMapIntelligenceSourceComponent* MapIntelligenceSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamFlagMeshComponent* TeamFlagMeshComponent;
    
public:
    AWatchTower();
};

