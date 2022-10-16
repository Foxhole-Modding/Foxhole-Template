#pragma once
#include "CoreMinimal.h"
#include "DestroyedStructure.h"
#include "RuinableStructure.generated.h"

class URuinedComponent;

UCLASS(Abstract, Blueprintable)
class WAR_API ARuinableStructure : public ADestroyedStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowRuinedInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URuinedComponent* RuinedComponent;
    
public:
    ARuinableStructure();
};

