#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "InteractiveBlueprintComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UInteractiveBlueprintComponent : public UUseComponent {
    GENERATED_BODY()
public:
    /*UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBPOnUse BPOnUse;*/
    
    UInteractiveBlueprintComponent();
};

