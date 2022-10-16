#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "PowerLine.generated.h"

class UBuildSocketComponent;
class USplineConnectorComponent;

UCLASS(Blueprintable)
class WAR_API APowerLine : public ABuildableStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USplineConnectorComponent* SplineConnector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* BackSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* FrontSocket;
    
public:
    APowerLine();
};

