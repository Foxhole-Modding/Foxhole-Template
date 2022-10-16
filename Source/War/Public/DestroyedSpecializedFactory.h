#pragma once
#include "CoreMinimal.h"
#include "DestroyedTeamStructure.h"
#include "DestroyedSpecializedFactory.generated.h"

class USpecializedFactoryComponent;

UCLASS(Blueprintable)
class WAR_API ADestroyedSpecializedFactory : public ADestroyedTeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    USpecializedFactoryComponent* SpecializedFactoryComponent;
    
public:
    ADestroyedSpecializedFactory();
};

