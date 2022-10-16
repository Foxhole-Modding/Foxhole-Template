#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "ConcreteSettler.h"
#include "Foundation.generated.h"

UCLASS(Blueprintable)
class WAR_API AFoundation : public ATeamStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConcreteSettler ConcreteSettler;
    
    AFoundation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

