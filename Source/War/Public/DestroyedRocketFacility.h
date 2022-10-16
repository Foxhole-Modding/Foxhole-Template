#pragma once
#include "CoreMinimal.h"
#include "DestroyedStructure.h"
#include "EMapTeamId.h"
#include "DestroyedRocketFacility.generated.h"

UCLASS(Blueprintable)
class WAR_API ADestroyedRocketFacility : public ADestroyedStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EMapTeamId SavedMapTeamID;
    
public:
    ADestroyedRocketFacility();
};

