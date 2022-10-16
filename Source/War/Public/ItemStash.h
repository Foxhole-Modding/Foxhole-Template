#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "ItemStash.generated.h"

class UBoxComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AItemStash : public ATeamStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnIfEmptyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* CollisionBox;
    
public:
    AItemStash();
};

