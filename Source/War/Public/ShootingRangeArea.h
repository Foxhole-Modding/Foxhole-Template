#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ShootingRangeArea.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API AShootingRangeArea : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* ShootingRangeComponent;
    
public:
    AShootingRangeArea();
private:
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
};

