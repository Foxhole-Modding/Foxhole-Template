#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SirenWarning.generated.h"

class UArrowComponent;

UCLASS(Blueprintable)
class WAR_API ASirenWarning : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UArrowComponent* ArrowComponent;
    
public:
    ASirenWarning();
};

