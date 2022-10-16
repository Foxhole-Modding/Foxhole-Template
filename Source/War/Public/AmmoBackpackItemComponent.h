#pragma once
#include "CoreMinimal.h"
#include "MiscItemComponent.h"
#include "AmmoBackpackItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UAmmoBackpackItemComponent : public UMiscItemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProvidedAmmoName;
    
    UAmmoBackpackItemComponent();
};

