#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UserComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UUserComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Replicated)
    TWeakObjectPtr<AActor> AssociatedActor;
    
public:
    UUserComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

