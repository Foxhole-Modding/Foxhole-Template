#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EmplacedWeapon.h"
#include "CoalitionAssignable.h"
#include "EmplacedArtillery.generated.h"

class UMountComponent;
class UOccupiableComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API AEmplacedArtillery : public AEmplacedWeapon, public ICoalitionAssignable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMountComponent> RotatorMountComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOccupiableComponent* RotatorOccupiableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* GunnerTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* RotatorTrigger;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 RequiredSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
public:
    AEmplacedArtillery();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    
    // Fix for true pure virtual functions not being implemented
};

