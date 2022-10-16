#pragma once
#include "CoreMinimal.h"
#include "LargeItemComponent.h"
#include "UObject/NoExportTypes.h"
#include "WoundedCarriedItemComponent.generated.h"

class ASimCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UWoundedCarriedItemComponent : public ULargeItemComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimCharacter* CarriedCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CapsuleOffset;
    
    UWoundedCarriedItemComponent();
};

