#pragma once
#include "CoreMinimal.h"
#include "Fort.h"
#include "ConcreteSettler.h"
#include "ConcreteFort.generated.h"

UCLASS(Blueprintable)
class WAR_API AConcreteFort : public AFort {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AConcreteFort();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

