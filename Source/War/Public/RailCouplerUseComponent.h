#pragma once
#include "CoreMinimal.h"
#include "UseComponent.h"
#include "UObject/NoExportTypes.h"
#include "RailCouplerUseComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URailCouplerUseComponent : public UUseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ChainVisualOffset;
    
    URailCouplerUseComponent();
};

