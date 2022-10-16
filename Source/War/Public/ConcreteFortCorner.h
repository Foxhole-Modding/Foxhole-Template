#pragma once
#include "CoreMinimal.h"
#include "FortCorner.h"
#include "ConcreteSettler.h"
#include "ConcreteFortCorner.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFortCorner : public AFortCorner {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AConcreteFortCorner();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

