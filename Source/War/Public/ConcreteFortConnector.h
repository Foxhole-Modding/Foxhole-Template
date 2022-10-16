#pragma once
#include "CoreMinimal.h"
#include "FortConnector.h"
#include "ConcreteSettler.h"
#include "ConcreteFortConnector.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortConnector : public AFortConnector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AConcreteFortConnector();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

