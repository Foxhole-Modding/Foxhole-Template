#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EmplacedWeapon.h"
#include "EmplacedWeaponWithShieldedSeat.generated.h"

class UMountComponent;
class UOccupiableComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API AEmplacedWeaponWithShieldedSeat : public AEmplacedWeapon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMountComponent> ShieldedMountComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOccupiableComponent* ShieldedOccupiableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* GunnerTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShieldedTrigger;
    
public:
    AEmplacedWeaponWithShieldedSeat();
};

