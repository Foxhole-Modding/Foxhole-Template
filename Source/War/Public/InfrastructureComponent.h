#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EFortModificationType.h"
#include "InfrastructureComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UInfrastructureComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EFortModificationType FilteredTypes[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Effectiveness;
    
public:
    UInfrastructureComponent();
};

