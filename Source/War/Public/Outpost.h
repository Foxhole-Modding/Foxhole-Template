#pragma once
#include "CoreMinimal.h"
#include "Base.h"
#include "Outpost.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API AOutpost : public ABase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
public:
    AOutpost();
};

