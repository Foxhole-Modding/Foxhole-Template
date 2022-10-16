#pragma once
#include "CoreMinimal.h"
#include "FortObservation.h"
#include "ConcreteSettler.h"
#include "ConcreteFortObservation.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortObservation : public AFortObservation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AConcreteFortObservation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

