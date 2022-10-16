#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "EmplacedStructure.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class WAR_API AEmplacedStructure : public ATeamStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PackagedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmplacedIncomingDamageModifier;
    
    AEmplacedStructure();
};

