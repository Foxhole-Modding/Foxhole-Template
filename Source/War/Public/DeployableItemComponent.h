#pragma once
#include "CoreMinimal.h"
#include "LargeItemComponent.h"
#include "DeployableItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UDeployableItemComponent : public ULargeItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeployCodeName;
    
public:
    UDeployableItemComponent();
};

