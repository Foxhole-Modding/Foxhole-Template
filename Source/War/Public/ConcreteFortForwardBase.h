#pragma once
#include "CoreMinimal.h"
#include "ConcreteSettler.h"
#include "FortForwardBase.h"
#include "ConcreteFortForwardBase.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortForwardBase : public AFortForwardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AConcreteFortForwardBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

