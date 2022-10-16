#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "FieldBridge.generated.h"

class UStaticMeshComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API AFieldBridge : public ABuildableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FrontRamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BackRamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* FrontKillVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* BackKillVolume;
    
public:
    AFieldBridge();
};

