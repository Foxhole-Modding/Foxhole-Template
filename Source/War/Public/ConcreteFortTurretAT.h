#pragma once
#include "CoreMinimal.h"
#include "FortTurretAT.h"
#include "ConcreteSettler.h"
#include "ConcreteFortTurretAT.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortTurretAT : public AFortTurretAT {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AConcreteFortTurretAT();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

