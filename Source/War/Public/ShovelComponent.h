#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TaskItemComponent.h"
#include "ConnectorConfiguration.h"
#include "RepSnapInfo.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ShovelComponent.generated.h"

class AImpactEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UShovelComponent : public UTaskItemComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AImpactEffect> ImpactEffect;
    
public:
    UShovelComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPlaceTrench(FName CodeName, FVector Location, FRotator Rotation, const FRepSnapInfo SnapInfo, const FRepSnapInfo ConnectorSnapInfo, const FConnectorConfiguration& ManualConnectorConfiguration);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayFX();
    
};

