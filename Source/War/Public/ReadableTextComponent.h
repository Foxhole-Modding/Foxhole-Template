#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "ReadableTextComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UReadableTextComponent : public UUseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoreCodeName;
    
public:
    UReadableTextComponent();
};

