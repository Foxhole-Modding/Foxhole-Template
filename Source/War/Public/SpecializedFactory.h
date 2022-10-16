#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "SpecializedFactory.generated.h"

class USpecializedFactoryComponent;

UCLASS(Blueprintable)
class WAR_API ASpecializedFactory : public ATeamStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, SaveGame, meta=(AllowPrivateAccess=true))
    USpecializedFactoryComponent* SpecializedFactoryComponent;
    
public:
    ASpecializedFactory();
};

