#pragma once
#include "CoreMinimal.h"
#include "ResourceTransferStation.h"
#include "FuelQuantity.h"
#include "LiquidTransferStation.generated.h"

class UBuildSocketComponent;

UCLASS(Blueprintable)
class WAR_API ALiquidTransferStation : public AResourceTransferStation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFuelQuantity> FuelBuffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UBuildSocketComponent*> InputSockets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* OutputSocket;
    
public:
    ALiquidTransferStation();
};

