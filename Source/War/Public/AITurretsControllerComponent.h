#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITurretsControllerComponent.generated.h"

class UAITurretComponent;
class UOccupiableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UAITurretsControllerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UAITurretComponent*> AITurretComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UOccupiableComponent*> OccupiableComponents;
    
public:
    UAITurretsControllerComponent();
};

