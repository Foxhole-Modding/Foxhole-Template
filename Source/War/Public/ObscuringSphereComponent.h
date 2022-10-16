#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "ObscuringSphereComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UObscuringSphereComponent : public USphereComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumVisibilityRadius;
    
    UObscuringSphereComponent();
};

