#pragma once
#include "CoreMinimal.h"
#include "Structure.h"
#include "DestroyedStructure.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API ADestroyedStructure : public AStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScorchable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsScorched;
    
public:
    ADestroyedStructure();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

