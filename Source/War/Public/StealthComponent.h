#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StealthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UStealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OpacityParamName;
    
public:
    UStealthComponent();
};

