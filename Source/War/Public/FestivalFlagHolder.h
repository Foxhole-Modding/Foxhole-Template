#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TeamStructure.h"
#include "FestivalFlagHolder.generated.h"

class UPrimitiveComponent;
class UCapsuleComponent;
class AActor;

UCLASS(Blueprintable)
class WAR_API AFestivalFlagHolder : public ATeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* DropOffLocation;
    
public:
    AFestivalFlagHolder();
protected:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

