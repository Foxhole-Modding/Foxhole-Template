#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "CoalitionAssignable.h"
#include "PowerNode.h"
#include "AmmoRoom.generated.h"

class UGenericStockpileComponent;

UCLASS(Blueprintable)
class WAR_API AAmmoRoom : public ATeamStructure, public ICoalitionAssignable, public IPowerNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UGenericStockpileComponent* GenericStockpileComponent;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 RequiredSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
public:
    AAmmoRoom();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

