#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentActor.h"
#include "ListeningArea.generated.h"

class UListeningAreaComponent;

UCLASS(Blueprintable)
class WAR_API AListeningArea : public AActor, public IPersistentActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float LifeSpanRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    UListeningAreaComponent* ListeningComponent;
    
public:
    AListeningArea();
    
    // Fix for true pure virtual functions not being implemented
};

