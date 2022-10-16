#pragma once
#include "CoreMinimal.h"
#include "FortTurret.h"
#include "ConcreteSettler.h"
#include "ConcreteFortTurret.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortTurret : public AFortTurret {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AConcreteFortTurret();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

