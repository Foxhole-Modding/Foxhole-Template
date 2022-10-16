#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildableStructure.h"
#include "PowerNode.h"
#include "Fort.generated.h"

class UBoxComponent;
class AEmplacedStructure;

UCLASS(Blueprintable)
class WAR_API AFort : public ABuildableStructure, public IPowerNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsEmplacedStructures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* EmplacementLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinUpgradeTargetDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ObstructionCheckOverrideExtents;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<AEmplacedStructure> EmplacedStructure;
    
    AFort();
    
    // Fix for true pure virtual functions not being implemented
};

