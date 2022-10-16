#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ForwardBase.h"
#include "PowerNode.h"
#include "FortForwardBase.generated.h"

class USceneComponent;
class ALadder;

UCLASS(Blueprintable)
class WAR_API AFortForwardBase : public AForwardBase, public IPowerNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* LadderLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALadder> LadderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALadder* Ladder;
    
public:
    AFortForwardBase();
    
    // Fix for true pure virtual functions not being implemented
};

