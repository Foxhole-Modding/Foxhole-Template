#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AFKTimeoutComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UAFKTimeoutComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilTimeoutHours;
    
public:
    UAFKTimeoutComponent();
};

