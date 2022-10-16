#pragma once
#include "CoreMinimal.h"
#include "FortTurretMG.h"
#include "ConcreteSettler.h"
#include "ConcreteFortTurretMG.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AConcreteFortTurretMG : public AFortTurretMG {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AConcreteFortTurretMG();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

