#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "EBuildLocationType.h"
#include "ConstructionSite.generated.h"

class UBoxComponent;
class UCraneSpawnLocationComponent;

UCLASS(Blueprintable)
class WAR_API AConstructionSite : public ATeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBuildLocationType BuildLocationFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* GarageFootprintComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UCraneSpawnLocationComponent* CraneSpawnLocationComponent;
    
public:
    AConstructionSite();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuildLocationBlocked() const;
    
};

