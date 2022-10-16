#pragma once
#include "CoreMinimal.h"
#include "Outpost.h"
#include "ForwardBase.generated.h"

class UTeamFlagMeshComponent;

UCLASS(Blueprintable)
class WAR_API AForwardBase : public AOutpost {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UTeamFlagMeshComponent* TeamFlagMeshComponent;
    
public:
    AForwardBase();
};

