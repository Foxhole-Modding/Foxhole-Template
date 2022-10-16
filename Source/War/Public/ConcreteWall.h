#pragma once
#include "CoreMinimal.h"
#include "Wall.h"
#include "ConcreteSettler.h"
#include "ConcreteWall.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API AConcreteWall : public AWall {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
public:
    AConcreteWall();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

